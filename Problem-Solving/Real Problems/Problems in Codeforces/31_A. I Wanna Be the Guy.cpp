#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int p, q;

    cin >> p;

    set<int> s;

    for (int i = 0; i < p; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    cin >> q;

    for (int j = 0; j < q; j++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    if (s.size() == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}