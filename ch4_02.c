#include<stdio.h>
int main(){
    int n=10;
    printf("Reverse table of 10 is >>>>>\n");
    for (int i=10;i;i--){
        printf("%d X %d = %d \n",n,i,n*i);
    }
    return 0;
}