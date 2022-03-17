#include <bits/stdc++.h>
using namespace std ;

int main()
{

    double a;
    scanf("%lf", &a);

    if (a >= 0 && a <= 400.00)
    {
        double b = a + a * 0.15;
        printf("Novo salario: %.2lf \n", b);
        printf("Reajuste ganho: %.2lf \n", a * .15);
        printf("Em percentual: 15 % \n");
    }
    else if (a >= 400.01 && a <= 800.00)
    {
        double b = a + a * 0.12;
        printf("Novo salario: %.2lf \n", b);
        printf("Reajuste ganho: %.2lf \n", a * .12);
        printf("Em percentual: 12 % \n");
    }
    else if (a >= 800.01 && a <= 1200.00)
    {
        double b = a + a * 0.1;
        printf("Novo salario: %.2lf \n", b);
        printf("Reajuste ganho: %.2lf \n", a * .1);
        printf("Em percentual: 10 % \n");
    }
    else if (a >= 1200.01 && a <= 2000.00)
    {
        double b = a + a * 0.07;
        printf("Novo salario: %.2lf \n", b);
        printf("Reajuste ganho: %.2lf \n", a * .07);
        printf("Em percentual: 7 % \n");
    }
    else if (a > 2000)
    {
        double b = a + a * 0.04;
        printf("Novo salario: %.2lf \n", b);
        printf("Reajuste ganho: %.2lf \n", a * .04);
        printf("Em percentual: 4 % \n");
    }
}