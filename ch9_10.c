// create a bank account of a customer which field do you use why 
#include<stdio.h>
typedef struct date{
    int date;
    int month;
    int year;

}date;

typedef struct account{
    int accno;
    char name[20];
    float amount;
    date din;
}acc;


void display(acc x,int *ptr){
    printf("\n *******Details of %d customer*****\n",*ptr+1);
    printf("Name \t:%s \n",x.name);
    printf("Account no \t:%d \n",x.accno);
    printf("Amount \t:%.2f \n",x.amount);
    printf("Starting date \t:%d/%d/%d \n",x.din.date,x.din.month,x.din.year);
}
int main(){
    int n;
    printf("Enter the number of customer :");
    scanf("%d",&n);
    acc customer[n];

    for(int i=0;i<n;i++){
        printf("\nEnter Customer %d details -\n",i+1);
        printf("Account no \t:");
        scanf("%d",&customer[i].accno);
        printf("Name \t:");
        scanf("%s",customer[i].name);
        printf("amount \t:");
        scanf("%f",&customer[i].amount);
        printf("Date \t:");
        scanf("%d%d%d",&customer[i].din.date,&customer[i].din.month,&customer[i].din.year);
        printf("\t\t ---xx---");
    }

    for(int i=0;i<n;i++){
        display(customer[i],&i);
    }
    return 0;
}