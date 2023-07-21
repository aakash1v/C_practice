#include<stdio.h>
void new(int a,int b,int *sum,float *avg){
    *sum = a+b;
    *avg = (float)(a+b)/2;
    
}
int main(){
    int x =5,y=10;
    int sum;
    float avg;
    new(x,y,&sum,&avg);
    printf("The sum is %d and the average is %.2f",sum,avg);
    return 0;
}