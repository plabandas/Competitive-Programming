#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    set<int> s;
    int i = 1;
    while (e >= a * i)
    {
        s.insert(a * i);
        i++;
    }

    int j = 1;
    while (e >= b * j)
    {
        s.insert(b * j);
        j++;
    }

    int k = 1;
    while (e >= c * k)
    {
        s.insert(c * k);
        k++;
    }

    int l = 1;
    while (e >= d * l)
    {
        s.insert(d * l);
        l++;
    }

    cout << s.size() << endl;
}