#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int test ;
    // cin >> test ;
    // for(int i =0 ; i<test ; i++)
    // {

    int a, b;
    cin >> a >> b;
    int counter = 0;

    for (int i = 0; i < 100; i++)
    {
        if (a % 10 == 0)
        {
            counter++;
            a = a / 10;
            if (counter == b)
            {
                break;
            }
        }
        else if (a % 10 != 0)
        {
            a = a - 1;
            counter++;
            if (counter == b)
            {
                break;
            }
        }
    }
    cout << a << endl;

    // }
}
