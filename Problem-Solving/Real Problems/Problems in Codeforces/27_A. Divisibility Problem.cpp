#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int test, val1, val2, temp;
    long long int divider;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> val1 >> val2;

        if (val1 > val2)
        {
            // int j = 1;
            // while (val1 > val2 * j)
            // {
            //     temp = val2 * (j + 1);
            //     j++;
            // }
            if (val1 % val2 == 0)
            {
                cout << "0" << endl;
                continue;
            }
            else
            {
                divider = val1 / val2;
                temp = val2 * (divider + 1);
            }

            cout << temp - val1 << endl;
        }
        else if (val1 == val2)
        {
            cout << "0" << endl;
        }
        else
        {

            cout << val2 - val1 << endl;
        }
    }
}