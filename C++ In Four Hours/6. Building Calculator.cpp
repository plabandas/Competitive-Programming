#include<iostream>
using namespace std ;

int main()
{

    float num1, num2 ;
    char op ;
    float result;

    cout << "Enter first number :: " ;
    cin >> num1;

    cout << "Enter Operator :: " ;
    cin >> op;

    cout << "Enter second number :: " ;
    cin >> num2;

    if(op == '+')
    {
        result = num1 + num2 ;
        cout << "The total sum is :: " << result << endl;
    }
    else if(op == '-')

    {
        result = num1 - num2 ;
        cout << "The total Subtraction is :: " << result << endl;
    }
    else if(op == '*')
    {
        result = num1*num2 ;
        cout << "The total Multiply is :: " << result << endl;

    }
    else if(op == '/')
    {
        result = num1/num2 ;
        cout << "The total Devident is :: " << result << endl;

    }
    else
    {
        cout << "Invalid Input" << endl;
    }


}
