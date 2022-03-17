#include <stdio.h>

int main()
{
    double a, i;
    double sum = 0;

    printf("Enter a number to see the Sumation of Parallel clause :: ");

    scanf("%lf", &a);

    for (i = 0; i <= a; i++) // make sure increments is       i = i+2
        {
            sum = sum + i ;  
           
        }

        printf("Sumation or Parallel clause is :: %lf", sum) ;


}
