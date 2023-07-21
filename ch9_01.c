#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10]; 
    };
int main(){
    struct employee e1;
    e1.code = 1;
    e1.salary = 50000;
    strcpy(e1.name,"Harry");
    // .--member operator

    printf("%d\n",e1.code);
    printf("%.2f\n",e1.salary);
    printf("%s",e1.name);
    return 0;
}