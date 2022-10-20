#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, val1, val2;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> val1 >> val2;
        if (val1 == val2)
        {
            cout << "0" << endl;
        }
        else if (val1 < val2)
        {
            int a, b, divident1, divident2;
            a = val1 % 10;
            b = val2 % 10;

            divident1 = val1 / 10;
            divident2 = val2 / 10;

            if (a >= b)
            {
                cout << divident2 - divident1 << endl;
            }
            else if (a < b)
            {
                cout << (divident2 - divident1) + 1 << endl;
            }
        }

        else if (val1 > val2)
        {
            int temp = val1;
            val1 = val2;
            val2 = temp;

            int a, b, divident1, divident2;
            a = val1 % 10;
            b = val2 % 10;

            divident1 = val1 / 10;
            divident2 = val2 / 10;

            if (a >= b)
            {
                cout << divident2 - divident1 << endl;
            }
            else if (a < b)
            {
                cout << (divident2 - divident1) + 1 << endl;
            }
        }
    }
}
