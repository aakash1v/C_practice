#include<stdio.h>
#include<string.h>
int main(){
    char st1[]= "Aakash kumar";
    char st2[10];
    strcpy(st2,st1);
    printf("%s",st2);
    printf(" %s",st1);
    printf("\n");
    printf("%d",strlen(st2));
    printf("\t%d",strlen(st1));


    char s1[] = "Eren";
    char s2[] = "yager";
    strcat(s1,s2);
    printf("\n");
    puts(s1);
    return 0;
}