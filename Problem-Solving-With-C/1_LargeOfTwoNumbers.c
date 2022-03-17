#include <stdio.h>

int main()          
{

    double a, b, c;

    printf("Enter first number :: ");
    scanf("%lf", &a);
    printf("Enter second number :: ");
    scanf("%lf", &b);
    printf("Enter third number :: ");
    scanf("%lf", &c);

    if (a > b && a > c)
    {
        printf("The largest number is %lf", a);
    }
    else if (b > a && b > c)
    {
        printf("The largest number is %lf", b);
    }
    else if (c > b && c > a)
    {
        printf("The largest number is %.2lf", c); // %.2lf is a data type of double
    }
}