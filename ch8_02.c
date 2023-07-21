#include<stdio.h>

int stringlen(char *str){
    int count =0;
    while(*str!='\0'){
        count++;
        str++;
    }
    return count;
}

int main(){
    char str[30];
    printf("Enter your string :");
    scanf("%s",&str);

    printf("%d",stringlen(str));
    return 0;
}