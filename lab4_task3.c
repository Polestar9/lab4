#include <stdio.h>

int main() 
{
    double a;
    int n;
    int EndResult(double a, int n) 
{
    double result = a;// Початкове значення доданку
    for (int i = 1; i <= n; i++) 
    {
    result += i; 
    }
    return result;// Повернення результату
}
    printf("Input a value: ");
    scanf("%lf", &a);
    printf("Input b value: ");
    scanf("%d", &n);
    int result = EndResult(a, n);
    printf("Result is: %d\n", result);
    return 0;
}