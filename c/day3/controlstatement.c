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
        printf("You are not eligible");
       }
          else if(age>limit && age <45){
            printf("You are eligible");
          }
          else {
            printf("We are sorry");
          }
         
 
   return 0;
   }

        