   /*   Decision control statement -> if, ifelse, elseif, nested if, switch
        Iterative control statement
        Jump control statement
   
   
   */


#include<stdio.h>

int main(){
       int age;
       int limit = 18;
       printf("please enter your age \n");
       scanf("%d",&age);

       if (age<limit){
        printf("you are not eligible");
          }
          else
            printf("welcome");
    return 0;

}