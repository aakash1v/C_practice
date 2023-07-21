#include<stdio.h>
int main(){
    int p,r,t;
    printf("Enter the principal \n");
    scanf("%d",&p);
    printf("Enter the rate \n");
    scanf("%d",&r);
    printf("Enter the time \n");
    scanf("%d",&t);
    float interest = (p*r*t)/100;
    printf("The intrest is %.2f ",interest);
    
    return 0;
}