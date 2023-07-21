#include<stdio.h>
int address(int x){
    printf("the address of x is %u\n",&x);
}
int main(){
    int a = 5;
    printf("the value of a is %d\n",a);
    address(a);
    printf("address of a is %u\n",&a);
    
    return 0;
}