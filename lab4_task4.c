#include <stdio.h>
#include <math.h>

int main() {
    double a, b, dx;
    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("dx: ");
    scanf("%lf", &dx);
    printf(" x\t|\ty=log2(x)    \n");
    printf("---------------------\n");
    for (double x = a; x <= b; x += dx) 
    {
    double y;
    if (x <= 0) 
    {
    printf("what the that even?????");
    break; 
    }
    y = log2(x);
    printf("%.2f\t|\t%.2f\n", x, y);
    }
    return 0;
}