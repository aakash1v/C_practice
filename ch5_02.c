#include<stdio.h>
int CelciusToFer(int t){
    float f = t*9/5+32;
    printf("Temperatur in Ferahanite is %.1f degree F\n",f);
    return 0;
}
int Force(int m){
    printf("The force of attraaction is %.1f\n",m*9.8);
}
int main(){
    int a;
    printf("Enter your temperature in Celcius\n");
    scanf("%d",&a);
    CelciusToFer(a);
    Force(100);
    return 0;
}