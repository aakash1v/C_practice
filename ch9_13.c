#include<stdio.h>
typedef struct datetime{
    int date;
    int month;
    int year;
    // ....Time....
    int hour;
    int min;
    int sec;  

}dt;


void display(dt t){
    printf("TimeStamp - %d:%d:%d %d/%d/%d\n",t.hour,t.min,t.sec,t.date,t.month,t.hour);
}

int main(){
    dt s1={8,8,2023,7,40,30};
    dt s2={21,7,2023,7,40,30};

    display(s1);
    display(s2);
    return 0;
}