#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[30]; 
    };
void show(struct employee emp){
    printf("The code of employee is : %d\n",emp.code);
    printf("The code of employee is : %s\n",emp.name);
    printf("The code of employee is : %f\n",emp.salary);
    emp.code = 0;

}
int main(){
    struct employee e1;
    struct employee *ptr;

    ptr =&e1;
    ptr->code = 101;
    ptr->salary = 1091;
    strcpy(ptr->name,"Aakash");

    show(*ptr);
    printf("chnage code is %d",ptr->code);

    return 0;
}