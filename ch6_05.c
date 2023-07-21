#include<stdio.h>

int main(){
    int i = 10;
    int *ptr = &i;
    int **ptr_ptr = &ptr;
    printf("value of i by using pointer to pointer is %d",**ptr_ptr);
    return 0;
}