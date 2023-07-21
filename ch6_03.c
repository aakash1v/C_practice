#include<stdio.h>
int value10(int *a){
    *a = *a * 10;
}
int main(){
    int x = 5;
    value10(&x);
    printf("%d",x);
    return 0;
}