#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    set<char> ch;

    for (int i = 0; i < test; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            char cha;
            cin >> cha;
            ch.insert(cha);
        }

        if (ch.size() == 1)
        {
            cout << 0 << endl;
        }
        else if (ch.size() == 2)
        {
            cout << 1 << endl;
        }
        else if (ch.size() == 3)
        {
            cout << 3 - 1 << endl;
        }
        else if (ch.size() == 4)
        {
            cout << 4 - 1 << endl;
        }
        ch.clear();
    }
}
