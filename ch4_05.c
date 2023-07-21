#include<stdio.h>
int main(){
    printf("Program of sum of number occured in table of 8 \n");
    int n =8;
    int sum =0;
    for(int i=1;i<=10;i++){
        sum = i*n + sum;
    }
    printf("The required sum is >>>> %d",sum);
    return 0;
}