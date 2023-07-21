#include<stdio.h>

struct vector{
    int y;
    int x;
};
int main(){
    struct vector v1,v2;
    v1.x = 34;
    v1.y =54;
    printf("x dimension is %d andy dimension is %d\n",v1.x,v1.y);    

    v2.x = 134;
    v2.y =114;
    printf("x dimension is %d andy dimension is %d\n",v2.x,v2.y);        
    return 0;
}