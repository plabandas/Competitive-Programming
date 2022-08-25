#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool flag = true;
    int a, b, temp, counter = 1;
    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (flag == true)
        {

            temp = b;
            flag = false;
        }

        if (b != temp)
        {
            counter++;
            temp = b;
        }
    }
    cout << counter << endl;
}