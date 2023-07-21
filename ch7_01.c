#include<stdio.h>
int main(){
    int arr[10];
    int *ptr = &arr[0];
    // for(int i =0;i<10;i++){
    //     arr[i]=(i+1)*10;
    // }
    // for(int i =0;i<10;i++){
    //     printf("arr[%d]=%d   ",i,arr[i]);
    // }
    printf("%d\n",ptr);
    printf("%d",(ptr+2));
    
    
    return 0;
}