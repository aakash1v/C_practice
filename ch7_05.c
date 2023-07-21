#include<stdio.h>
void countarr(int *arr,int n){
    printf("All positvie no of this array are :");
    for(int i=0;i<n;i++){
        if(arr[i]>0){
        printf("+%d ,",arr[i]);
        }
    }
}
int main(){
    int n;
    printf("Enter the length of the array :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element no %d :",i+1 );
        scanf("%d",&arr[i]);
    }
    
    countarr(arr,n);
    return 0;
}