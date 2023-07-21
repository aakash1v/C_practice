#include<stdio.h>
float average(int a,int b,int c); 
int main(){
    printf("Enter your three numbers\n");
    int a,b,c;
    scanf("%d %d %d",&a ,&b,&c);
    average(a,b,c);
    return 0;
}
float average(int a,int b,int c){
    float avg =(a+b+c)/3;
    printf("%.2f",avg);
    return 0;
} 

