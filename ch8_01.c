#include<stdio.h>
int main(){
    char str[]= "Aakash Kumar"; //it can't be reinitilized 
    for(int i=0;i<12;i++){  //printing string using loop ...
        printf("%c",str[i]);
    }
    printf("\t%s",&str);
    printf("\n>>>");

    char st[20];
    gets(st);
    puts(st);
    char *ptr = "Harry"; 
    ptr ="Carry"; //it can reinitilized like this ....

    return 0;
}