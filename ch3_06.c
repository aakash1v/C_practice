#include<stdio.h>
int main(){
    printf("Enter your four numbers\n");
    int a , b, c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    // printf("%d %d %d %d",a,b,c,d);
    if (a>b){
        if(a>c){
            if(a>d){
                printf("%d is the greatest",a);
            }
        }
    }
    if (b>a){
        if(b>c){
            if(b>d){
                printf("%d is the greatest",b);
            }
        }
    }
    if (c>b){
        if(c>a){
            if(c>d){
                printf("%d is the greatest",c);
            }
        }
    }
    if (d>b){
        if(d>a){
            if(d>c){
                printf("%d is the greatest",d);
            }
        }
    }
    
    return 0;
}