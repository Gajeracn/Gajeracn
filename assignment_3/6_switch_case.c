#include<stdio.h>
#include<math.h>
int main()
{
    char shape;
    int h,b,l,p,w,x,y;
    float z;
    printf("please enter t for triangle, r for rectangle, c for circle\n");
    scanf("%c", &shape);
    switch (shape)
    {
    case 't':
        printf("please enter the height of triangle\n");
        scanf("%d", &h);
        printf("please enter the base of triangle\n");
        scanf("%d", &b);
        x=b*h/2;
        printf("The area of your triangle is = %d", x);
        break;
    case 'r':
        printf("please enter the length of rectangle\n");
        scanf("%d", &l);
        printf("please enter the breadth of rectangle\n");
        scanf("%d", &p);
        y=l*p;
        printf("The area of your rectangle is = %d", y);
        break;
    case 'c':
        printf("please enter the radius of circle\n");
        scanf("%d", &w);
        z=3.14*pow(w,2);
        printf("The area of your circle is = %f", z);
        break;
    default:
        printf("please enter valid input. t for triangle, r for rectangle, c for circle\n");
        break;
    }
    
    return 0;
}