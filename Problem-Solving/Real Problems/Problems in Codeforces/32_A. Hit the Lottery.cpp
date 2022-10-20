#include <bits/stdc++.h>
using namespace std;

int divide(int a)
{
    int p;

    if (a >= 100)
    {
        p = a / 100;
    }
    else if (a >= 20 && a < 100)
    {
        p = a / 20;
    }
    else if (a >= 10 && a < 20)
    {
        p = a / 10;
    }
    else if (a >= 5 && a < 10)
    {
        p = a / 5;
    }
    else if (a >= 1 && a < 5)
    {
        p = a / 1;
    }
    return p;
}

int reminder(int a)
{
    int p;
    if (a >= 100)
    {
        p = a % 100;
    }
    else if (a >= 20 && a < 100)
    {
        p = a % 20;
    }
    else if (a >= 10 && a < 20)
    {
        p = a % 10;
    }
    else if (a >= 5 && a < 10)
    {
        p = a % 5;
    }
    else if (a >= 1 && a < 5)
    {
        p = a % 1;
    }
    return p;
}

int main()
{

    int val, counter = 0, temp, increment, remind;
    cin >> val;

    remind = val;
    while (remind != 0)
    {
        counter = counter + divide(val);
        remind = reminder(val);
        val = remind;
    }
    cout << counter << endl;
}