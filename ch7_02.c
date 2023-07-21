#include<stdio.h>
int table(int *arr,int num){
    for(int i=0;i<10;i++){
        arr[i]= num*i;
    }
    for(int i=0;i<10;i++){
       printf("%d X %d = %d\n",num,(i+1),arr[i]);
    }
    
}
int main(){
    int arr[10];
    table(arr,7);
    return 0;
}