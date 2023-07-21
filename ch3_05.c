#include<stdio.h>
int main(){
    printf("program to check uppercase or lower case or other\n");
    printf("Enter your input  >>>>>>");
    char x;
    scanf("%c",&x);
    if(x >64&& x<91){
        printf("%c is in upper case",x);
    }
    else if(x >96&& x<123){
        printf("%c is in lower case",x);
    }
    else{
        printf("not in upper or lower case");
    }
    return 0;
}