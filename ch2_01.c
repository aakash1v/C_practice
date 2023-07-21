#include<stdio.h>
int main(){
    // int a;a=b;
    // char ch = 'hello 2445 dhfisf';
    // printf("%c",ch);
    // printf("%d",3.0/8-2);
    printf("Enter your number ");
    int n ;
    scanf("%d",&n);
    if(n%97==0){
        printf("divisible by 97");
    }
    else{
        printf("Not divisible by 97");
    }
    printf("\n%f",3.1+1);//it is a floating point number ooo...

    int x=2,y=3,z=3,k=1;
    float sum = 3*x/y-z+k;
    printf("\n%.03f",sum);
    return 0;
}