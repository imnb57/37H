//pointers

#include<stdio.h>

int getsalary(int *salary);

int main(){
    int salary;
    printf("please enter your salary\n");
    scanf("%d",&salary);
    printf("your original salary is %d\n",salary);
    int result = getsalary(&salary);
    printf("your new salary is %d",result);
    return 0;
}
int getsalary(int *salary){
    return *salary*2;
}