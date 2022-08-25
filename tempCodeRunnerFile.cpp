#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int test, val1, val2, temp;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> val1 >> val2;

        if (val1 >= val2)
        {
            int j = 1;
            while (val1 > val2 * j)
            {
                temp = val2 * (j + 1);
                j++;
            }
            cout << temp - val1 << endl;
        }
        else
        {
             
             cout << val2 - val1 <<endl;
        
        }
    }
}