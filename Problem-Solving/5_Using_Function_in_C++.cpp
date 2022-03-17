#include <bits/stdc++.h>
using namespace std;

void add(double a, double b) // void is not giving return value
{
    cout << "The sumation product is :: " << a + b << endl;
}

void subtract(double a, double b)
{
    cout << "The subtract product is :: " << a - b << endl;
}
void multiply(double a, double b)
{
    cout << "The multiply product is :: " << a * b << endl;
}
void divide(double a, double b)
{
    cout << "The divide product is :: " << a / b << endl;
}

int addition(int a, int b)
{
    return a + b;
}

int main()

{
    double a, b;
    cout << "Enter a number :: ";
    cin >> a;

    cout << "Enter another number :: ";
    cin >> b;

    add(a, b);

    subtract(a, b);
    multiply(a, b);
    divide(a, b);

    double C = addition(a, b);
    cout << "The C sumation value is = " << C << endl;
}
