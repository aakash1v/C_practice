#include <stdio.h>

// fibonacci() funtion definition
int fibonacci(int num)
{
    // first base condition check
    if (num == 0)
    {
        return 0; 
    }
    // second base condition check
    else if (num == 1)
    {
        return 1; 
    }
    // else calling the fibonacci() function recursively till we get to the base conditions
    else
    {
        return fibonacci(num - 1) + fibonacci(num - 2); // recursively calling the fibonacc() function and then adding them
    }
}

int main()
{
    int num=0; 
    printf("Enter the number of elements to be in the series : ");
    scanf("%d", &num); 
    int i;
    
    for (i = 0; i < num; i++)
    {
        printf("%d\n", fibonacci(i)); 
    }

    return 0;
}
