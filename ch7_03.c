#include<stdio.h>
int revtable(int *arr,int n){ //array reverse function ...good...
    int temp;
    for(int i=0;i<n/2;i++){
        temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-i-1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("arr[%d]=%d\n",i,arr[i]);
    }

}
int main(){
   int new[6]={1,2,3,4,5,6};
   revtable(new,6);

    return 0;
}