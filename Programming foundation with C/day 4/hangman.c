#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_WRONG_GUESSES 6
#define MAX_WORD_LENGTH 20
#define NUM_WORDS 10

// List of words
const char *wordList[NUM_WORDS] = {
    "programming", "hangman", "challenge", "computer", "algorithm",
    "language", "developer", "software", "debugging", "interface"
};

// Function prototypes
const char* chooseWord(void);
void displayWord(const char* word, const bool* guessed);
void displayHangman(int wrongGuesses);
bool processGuess(const char* word, char guess, bool* guessed, int* wrongGuesses);
void clearInputBuffer(void);
char getValidGuess(void);

int main(void) {
    const char* word = chooseWord();
    int length = strlen(word);
    bool guessed[MAX_WORD_LENGTH] = {false};
    int wrongGuesses = 0;
    char guess;
    bool gameWon = false;

    printf("Welcome to Hangman!\n");

    while (wrongGuesses < MAX_WRONG_GUESSES && !gameWon) {
        printf("\nCurrent word: ");
        displayWord(word, guessed);
        displayHangman(wrongGuesses);

        printf("Guesses left: %d\n", MAX_WRONG_GUESSES - wrongGuesses);
        guess = getValidGuess();

        if (processGuess(word, guess, guessed, &wrongGuesses)) {
            printf("Correct guess!\n");
        } else {
            printf("Wrong guess!\n");
        }

        // Check if the game is won
        gameWon = true;
        for (int i = 0; i < length; i++) {
            if (!guessed[i]) {
                gameWon = false;
                break;
            }
        }
    }

    printf("\nThe word was: %s\n", word);
    if (gameWon) {
        printf("Congratulations! You've won!\n");
    } else {
        printf("Game over! Better luck next time!\n");
    }

    return 0;
}

const char* chooseWord(void) {
    srand((unsigned int)time(NULL));
    return wordList[rand() % NUM_WORDS];
}

void displayWord(const char* word, const bool* guessed) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (guessed[i])
            printf("%c ", word[i]);
        else
            printf("_ ");
    }
    printf("\n");
}

void displayHangman(int wrongGuesses) {
    const char* hangmanFigures[] = {
        "\n\n\n\n\n",
        "\n\n\n\n\nO",
        "\n\n\n\nO\n|",
        "\n\n\nO\n/|",
        "\n\nO\n/|\\",
        "\nO\n/|\\\n/",
        "O\n/|\\\n/ \\"
    };
    printf("%s\n", hangmanFigures[wrongGuesses]);
}

bool processGuess(const char* word, char guess, bool* guessed, int* wrongGuesses) {
    bool correct = false;
    for (int i = 0; word[i] != '\0'; i++) {
        if (tolower(word[i]) == tolower(guess)) {
            guessed[i] = true;
            correct = true;
        }
    }
    if (!correct) {
        (*wrongGuesses)++;
    }
    return correct;
}

void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

char getValidGuess(void) {
    char guess;
    while (1) {
        printf("Enter a guess: ");
        if (scanf(" %c", &guess) == 1) {
            clearInputBuffer();
            if (isalpha(guess)) {
                return tolower(guess);
            }
        } else {
            clearInputBuffer();
        }
        printf("Invalid input. Please enter a single letter.\n");
    }
}