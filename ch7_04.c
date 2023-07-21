#include<stdio.h>
int table(int *arr,int n,int num){
    printf("The table of %d --\n",num);
    for(int i=0;i<10;i++){
        arr[i]=num*(1+i);
    }
    for(int i=0;i<n;i++){
        printf("%d X %d is %d\n",num,(i+1),arr[i]);
    }
    printf("*********************************************\n\n");
}
int main(){
    int arr[3][10];
    // table(arr[0],10,6);
    // table(arr[1],10,5);
    // table(arr[2],10,11);
    int x;int i=0;
    while(x!=0){
        
        printf("Enter your number(0 to exit) :");
        scanf("%d",&x);
        table(arr[i],10,x);
        printf("bye^bye");
        i++;
    }
    return 0;
}