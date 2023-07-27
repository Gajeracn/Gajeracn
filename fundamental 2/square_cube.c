//write a program to make a square and cube of number.

#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d,e;
    
    printf("please enter any number for a:");
    scanf("%d", &a);
    b=pow(a, 2);
    c=pow(a, 3);
    d=pow(2, 4);
    e=pow(a, 5);
    printf("square of your number is: %d", b);
    printf("\ncube of your number is: %d", c);
    printf("\n4 time power of a is: %d", d);
    printf("\n5 time power of a is: %d", e);
    
    
    return 0;
}
