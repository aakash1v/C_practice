#include<stdio.h>
int main(){
    printf("This is a program to check your input year is leap year or not\n");
    printf("ENter your year\n");
    int yr;
    scanf("%d",&yr);
    if (yr%400==0 ||(yr%100 !=0 && yr%4==0)){
        printf("The year is leap year");
    }
    else{
        printf("The year is not leap year");
    }
    return 0;
}