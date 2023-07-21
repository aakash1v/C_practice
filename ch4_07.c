#include<stdio.h>
int main(){
    printf("To check a number is prime or not\n");
    printf("Enter your number\n");
    int x;
    scanf("%d",&x);
    int count=0;
    for(int i=1;i<=x;i++){
        if(x%i==0){count++;}
    }
    if(count==2){
        printf("%d is prime no",x);
    }
    else{
        printf("%d is not prime no",x);
    }

    return 0;
}