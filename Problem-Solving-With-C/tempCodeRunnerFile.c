#include <stdio.h>

int main()
{
    double a, p, i;
    double sum = 0;

    printf("Enter a number to see the Sumation of SQUARE Parallel clause :: ");

    scanf("%lf", &a);

    for (i = 1; i <= a; i++) // make sure increments is       i = i+2
        {
            p = i*i;
            sum = sum + p ;
           
        }

        printf("Sumation or Parallel clause is :: %.2lf", sum) ;


}
