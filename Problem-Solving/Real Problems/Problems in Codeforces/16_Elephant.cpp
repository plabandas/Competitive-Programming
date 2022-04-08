#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int counter = 0;
    for (int i = 5; i >= 1; i--)
    {
        int temp = a / i;
        a = a - i * temp;
        counter = counter + temp;
    }
    cout << counter << endl;
}
