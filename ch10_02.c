#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("table.txt","w");
    int num;
    printf("Enter the number you want the table of in text file :");
    scanf("%d",&num);
    fprintf(ptr,"\nThe table of %d is -\n",num);
    for(int i =1;i<=10;i++){
        fprintf(ptr,"%d X %d = %d\n",num,i,num*i);
    }
    return 0;
}