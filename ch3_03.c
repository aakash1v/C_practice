#include<stdio.h>
int main(){
    printf("*****This is a program to calculate\n");
    printf("Enter your salary \n");
    int salary;
    float tax = 0;
    scanf("%d",&salary);
    if(salary>250000 && salary<500000){
        tax += (salary-250000)*.05;
    }
    if(salary>500000 && salary<1000000){
        tax += (salary-500000)*.2;
    }
    if(salary>1000000){
        tax += (salary-1000000)*.3;
    }
    printf("your total tax is %.2f",tax);
    return 0;
}