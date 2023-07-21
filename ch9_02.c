#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[30]; 
    };
int main(){
    struct employee e1,e2,e3;
    printf("Enter the details of e1 -\n");
    printf("code \t :");
    scanf("%d",&e1.code);
    printf("Name \t :");
    scanf("%s",e1.name);
    printf("Salary \t :");
    scanf("%f",&e1.salary);
    printf("\nEnter the details of e2 -\n");
    printf("code \t :");
    scanf("%d",&e2.code);
    printf("Name \t :");
    scanf("%s",e2.name);
    printf("Salary \t :");
    scanf("%f",&e2.salary);
    printf("\nEnter the details of e3 -\n");
    printf("code \t :");
    scanf("%d",&e3.code);
    printf("Name \t :");
    scanf("%s",e3.name);
    printf("Salary \t :");
    scanf("%f",&e3.salary);

}