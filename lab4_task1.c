#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, z;
    double t;
    while (1) 
    {
    printf("Input x value: ");
    scanf("%d", &x);
    printf("Input y value: ");
    scanf("%d", &y);
    printf("Input z value: ");
    scanf("%d", &z);
    if (z==0||(1+x*x)==0)
    {
    printf("Cannot divide by 0. Enter something else.\n");
    } 
    else 
    {
    t=(1+z)*(x+(y/z))/(x-(1/(1+x*x)));
    break;
    }
    }
    printf("t = %.2f\n", t);
    return 0;
}