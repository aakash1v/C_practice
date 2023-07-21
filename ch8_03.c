#include<stdio.h>
#include<string.h>
int main(){
    char st1[30];
    char st2[30];
    char c;
    int i=0;
    printf("Enter the value of the first string : ");
    scanf("%s",st1);
    printf("Enter the value of the second string  character by character: ");

    while(c!='\n'){
        fflush(stdin); //phila character jo bhi aa raha h jo usko flush kar do ...
        scanf("%c",&c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0';
    printf("The value of first string is %s\n",st1);
    printf("The value of second string is %s\n",st2);
    printf("Starcamp for those two string is %d",strcmp(st1,st2));
    return 0;
}


