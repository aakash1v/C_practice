 #include<stdio.h>
 int main(){
    printf("Factoial of YOur number \n");
    printf("Enter YOur number \n");
    int n;
    int factorial=1;
    scanf("%d",&n);
    // for(int i=1;i<=n;i++){
        int i=1;
        while(i<=n){
        factorial *=i;
        i++;
    }
    printf("Our factorial is %d",factorial);

    return 0;
 }