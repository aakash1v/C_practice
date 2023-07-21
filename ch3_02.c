#include<stdio.h>
int main(){
    int math,phy,chem;
    printf("Enter your maths marks\n");
    scanf("%d",&math);
    printf("Enter your chemistry marks\n");
    scanf("%d",&chem);
    printf("Enter your physics marks\n");
    scanf("%d",&phy);
    float sum = math+ phy + chem;
    if(sum/3>40 && math>=33 &&phy>=33 && chem >= 33){
        printf("You passed the exam");
    }
    else{
        printf("You failed");
    }
    return 0;
}