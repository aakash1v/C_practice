#include<stdio.h>
typedef struct samay
{
  int hour;
  int min;
  int sec;
}time;

void display(time t){
    printf("Time is - %d:%d:%d\n",t.hour,t.min,t.sec);
}
int main(){
    time t1={2,10,20};
    time t2={5,00,00};

    display(t1);
    display(t2);
    return 0;
}