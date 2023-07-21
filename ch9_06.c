#include<stdio.h>
#include<string.h>

typedef struct employee{
    int code;
    float salary;
    char name[30]; 
    }emp;  //emp datatype ...we can also use struct employee
    //custom datatype bana ka kam aata hai.. heehe
    //alias name

void show(emp emp1){
    printf("The code of employee is : %d\n",emp1.code);
    printf("The code of employee is : %s\n",emp1.name);
    printf("The code of employee is : %f\n",emp1.salary);
   

}
int main(){
    // decalration of ptr and e1 
    emp e1;
    emp *ptr;

    // pointing ptr to e1 
    ptr =&e1;
    //set the member value for e1
    ptr->code = 101;
    ptr->salary = 1091;
    strcpy(ptr->name,"Aakash");

    show(e1);
    return 0;
}