#include <bits/stdc++.h>
using namespace std;

int main()
{

    char data[100], doc[100];

    string a, b;
    cin >> a;
    cin >> b;
    // cout << a.size();
    // cout << endl;
    // cout << b.size();
    for (int i = 0; i < a.size(); i++)
    {
        char temp, temp1;
        temp = a[i];
        temp1 = tolower(temp);
        data[i] = temp1;
    }

    for (int j = 0; j < b.size(); j++)
    {
        char temp, temp1;
        temp = b[j];
        temp1 = tolower(temp);
        doc[j] = temp1;
    }
    int count;
    for (int r = 0; r < a.size(); r++)
    {
        if (data[r] == doc[r])
        {
            count = 0;
            continue;
        }
        else if (data[r] > doc[r])
        {
            count = 1;
            break;
            ;
        }
        else if (data[r] < doc[r])
        {
            count = -1;
            break;
        }
    }

    cout << count;

    //     cout << endl;
    // for (int k = 0; k < a.size(); k++)
    // {
    //     cout << data[k] << " ";
    // }
    // cout << endl;
    // for (int p = 0; p < b.size(); p++)
    // {
    //     cout << doc[p] << " ";
}
