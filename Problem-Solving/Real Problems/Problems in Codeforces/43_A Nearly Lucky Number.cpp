#include <bits/stdc++.h>
using namespace std;
long long int numb(long long int a, long long int b)
{
    long long int p = (a / b) % 10;
    return p;
}
int main()
{

    long long int n, indicator = 0;
    cin >> n;
    string a = to_string(n);
    bool b = true;
    long long k = 1;
    long long i = 1;
    while (i <= a.size())
    {
        i++;

        if (b == true)
        {
            b = false;
            long long int z = numb(n, k);
            // cout << a << " ";
            if (z == 7 || z == 4)
            {
                indicator++;
                // cout << z << " "<< indicator << endl;
            }
            continue;
        }
        else
        {

            long long int l = numb(n, k * 10);
            k = k * 10;
            // cout << l << " ";
            if (l == 7 || l == 4)
            {
                indicator++;
                // cout << l << " " << indicator << endl;
            }
        }
    }

    if (indicator == 7 || indicator == 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}