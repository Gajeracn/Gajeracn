#include<stdio.h>
int main()
{
int a, b;
b=4;
printf("please enter any year to check leap year");
scanf("%d",&a);
if(a%b==0){
    printf("entered year is leap year.");
}
else
{
    printf("entered year is not leap year");
}

    return 0;
}
