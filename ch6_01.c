#include<stdio.h>
int main(){
    int i=5;
    printf("the address is %u ",&i);
    int *ptr = &i;
    printf("the value of address i is %d\n",*ptr);

    printf("the value of address ptr is %u\n",ptr);
    return 0;
}