#include<stdio.h>
int main(){
    printf("Enter your temperatue in Celcius and we will convert it into the Farenhite \n");
    int cel;
    scanf("%d",&cel);
    float fer = cel*9/5+32;
    printf("Your desired temperature is %.2f",fer);
    
    return 0;
}