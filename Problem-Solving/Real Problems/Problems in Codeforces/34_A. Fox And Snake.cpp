#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row, coloum;
    bool tr = true;
    cin >> row >> coloum;

    for (int i = 1; i <= row; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = 1; j <= coloum; j++)
            {
                cout << "#";
            }
        }
        else if (tr == true)
        {
            for (int j = 1; j < coloum; j++)
            {
                cout << ".";
            }
            cout << "#";
            tr = false;
        }
        else if (tr == false)
        {
            cout << "#";
            for (int j = 1; j < coloum; j++)
            {
                cout << ".";
            }

            tr = true;
        }

        cout << endl;
    }
}