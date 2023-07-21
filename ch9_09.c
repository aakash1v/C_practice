#include<stdio.h>
typedef struct complex{
    int real;
    int complex;
}comp;

void display(comp c){
    
    printf("real part :%d \tcomplex part :%d\n",c.real,c.complex);
   
}
int main(){
    comp cnums[5];
    for(int i =0;i<5;i++){
        printf("Enter the real value for %d :",i+1);
        scanf("%d",&cnums[i].real);
        printf("Enter the complex value for %d :",i+1);
        scanf("%d",&cnums[i].complex);
    }
for(int i =0;i<5;i++){
    printf("For  number %d--\n",i+1);
      display(cnums[i]); 
      printf("\n") ;
    }
    return 0;
}