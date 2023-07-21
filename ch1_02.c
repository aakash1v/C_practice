#include<stdio.h>
int main(){
    int a ;
    printf("Enter the radius of the circle \n");
    scanf("%d",&a);
    printf("The are of the circle is %.2f\n",3.14*a*a);
    printf("\nEnter the radius and height of cylinder %.2f \n");
    int x,y;
    scanf("%d %d",&x,&y);
    printf("The volume of the cylinder is %.2f",2*3.14*x*y);

    return 0;
}