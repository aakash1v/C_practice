#include<stdio.h>
/// some file uses is left in it use file in it ....ok ..after some time ..
typedef struct date{
    int date;
    int month;
    int year;

}date;
typedef struct customer{
    char name[30];
    int account;
    float amount;
    int addhar;
    date din;
    char address[50];
}cust;
void display(cust c,int *ptr){
    printf("\n----Customer -%d details-----\n",*ptr+1);
    printf("YOu are %s\n",c.name);
    printf("Account No\t :%d\n",c.account);
    printf("Address \t: %s\n",c.address);
    printf("Amount Left\t: %.2f..\n",c.amount);
}
int main(){
    int n;
    printf("Enter the number of people :");
    scanf("%d",&n);
    cust people[n];
    // initilizing the details...
    for(int i=0;i<n;i++){
        printf("\nEnter the details for customer %d -\n",i+1);
        printf("Name \t:");
        scanf("%s",&people[i].name);
        printf("addhar \t:");
        scanf("%d",&people[i].addhar);
        printf("address \t:");
        scanf("%s",&people[i].address);
        printf("Enter the amount you want to submit :");
        scanf("%f",&people[i].amount);
        people[i].account = 23001+i;
    }
    for(int i=0;i<n;i++){
        display(people[i],&i);
    }
    //Some filee work...
    FILE *ptr;
    ptr = fopen("account_opening.txt","w");
    for(int i=0;i<n;i++){
        fprintf(ptr,"\n----Customer -%d details-----\n",i+1);
        fprintf(ptr,"YOu are %s\n",people[i].name);
        fprintf(ptr,"Account No\t :%d\n",people[i].account);
        fprintf(ptr,"Address \t: %s\n",people[i].address);
        fprintf(ptr,"Addhar \t: %d\n",people[i].addhar);
        fprintf(ptr,"Amount Left\t: %.2f..\n",people[i].amount);
    }
    return 0;
}