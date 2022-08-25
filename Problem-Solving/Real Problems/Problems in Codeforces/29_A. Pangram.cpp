#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;

    set<char> s;
    cin >> size;
    char ch[size];

    for (int i = 0; i < size; i++)
    {
        cin >> (ch[i]);
        ch[i] = tolower(ch[i]);
    }
    for (auto i : ch)
    {
        s.insert(i);
    }
    if (s.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}