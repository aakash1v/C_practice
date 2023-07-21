#include<stdio.h>
int main(){
    FILE *ptr;
    ptr =fopen("three.txt","r");
    int n1,n2,n3;
    fscanf(ptr,"%d %d %d",&n1,&n2,&n3);
    printf("All the three integers are %d %d and %d",n1,n2,n3);
    fclose(ptr);
    return 0;
}