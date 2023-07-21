#include<stdio.h>
int main(){
    char name[30];
    int salary;
    FILE *ptr;
    ptr=fopen("name_salary.txt","w");

    for(int i=1;i<3;i++){
    printf("******Enter Name and Salary*********\n");
    printf("Enter your name :");
    scanf("%s",&name);
    printf("Enter your salary :");
    scanf("%d",&salary);
    }
    // writing in file...
  for(int i=1;i<3;i++){
    fprintf(ptr,"\n---Employee %d----\n",i);
    fprintf(ptr,"Name : %s\n",name);
    fprintf(ptr,"Salary : %d\n",salary);
    }  
    fclose(ptr);  
    return 0;
}