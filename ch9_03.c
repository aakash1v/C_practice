#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[30]; 
    };
int main(){
    struct employee facebook[100];
    facebook[0].code =100;
    facebook[0].salary =90000;
    strcpy(facebook[0].name,"Aakaash");
    
    facebook[1].code =100;
    facebook[1].salary =90000;
    strcpy(facebook[1].name,"Aakaash");

    facebook[2].code =10;
    facebook[2].salary =9000;
    strcpy(facebook[2].name,"Demon");
 
    return 0;
}