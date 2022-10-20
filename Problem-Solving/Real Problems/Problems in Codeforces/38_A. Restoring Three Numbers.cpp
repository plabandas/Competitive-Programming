#include <bits/stdc++.h>
using namespace std;

int main()
{
    int val[4], min = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> val[i];
    }

    sort(val, val + 4);

    cout << val[3] - val[2] << " " << val[3] - val[1] << " " << val[3] - val[0] << endl;
}
