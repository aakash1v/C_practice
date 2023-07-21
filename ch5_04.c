#include<stdio.h>
int SumNatural(int n){
    int sum =0;
    if(n!=0){
        return n + SumNatural(n-1);
    }
    else{
        return n;    
    }
}


int main(){
    SumNatural(10);
    return 0;
}