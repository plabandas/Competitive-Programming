#include <bits/stdc++.h>
using namespace std;

int main()

{

    int x;
    cin >> x;
    int count = 0;
    int a, b, c;
    for (int i = 1; i <= x; i++)
    {

        cin >> a >> b >> c;

        if (a == 1 && b == 1)
        {
            count = count + 1;
            continue;
        }
        if (a == 1 && c == 1)
        {
            count = count + 1;
            continue;
        }
        if (b == 1 && c == 1)
        {
            count = count + 1;
            continue;
        }
        if (a == 1 && b == 1 && c == 1)
        {
            count = count + 1;
            continue;
        }
    }
    
    cout << count;
}
