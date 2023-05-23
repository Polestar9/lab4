#include <stdio.h>

int main() 
{
    int start;
    printf("start: ");
    scanf("%d", &start);
    int end;
    printf("End: ");
    scanf("%d", &end);
    float OddSum = 0; 
    int OddCounter = 0; 
    for (int counter = start; counter <= end; counter++) 
    {
    if (counter%2!=0) //перевірка числа на непарність
    {
    OddSum += counter; //знаходження суми непарник
    OddCounter++; //скільки непарних
    }
    }
    if (OddCounter>0) //no bitches????????
    {
    float OddAverage = OddSum / OddCounter;
    printf("The average quantity of odd numbers in [%d;%d] range is: %.2f", start, end, OddAverage);
    }
    else 
    {
    printf("There's no odd numbers in [%d;%d] range", start, end);
    }
    return 0;
}