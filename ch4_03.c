#include<stdio.h>
int main(){
    printf("Do while loop at leat one\n");
    printf("Enter your input>>>>>>\n");
    int x=20;
    scanf("%d",&x);
    do{
        printf("%d <hello>\n",x);
        x--;
    }while(x);

    return 0;
}