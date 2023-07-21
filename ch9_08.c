#include<stdio.h>

struct vector{
    int y;
    int x;
};

struct vector sumVector(struct vector v1,struct vector v2){
   struct vector result ;
   result.x =v1.x+v2.x;
   result.y =v1.y+v2.y;
   return result;

};

int main(){
    struct vector v1,v2,sum;
    v1.x = 3;
    v1.y =4;
    printf("x dimension is %d andy dimension is %d\n",v1.x,v1.y);    

    v2.x = 4;
    v2.y =1;
    printf("x dimension is %d andy dimension is %d\n",v2.x,v2.y);        

    sum = sumVector(v1,v2);
    printf("x dim result is %d and y dim result is %d\n",sum.x,sum.y);
    return 0;
}