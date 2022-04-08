#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int test ;
    // cin >> test ;
    // for(int i =0 ; i<test ; i++)
    // {

    string a;
    cin >> a;

    int upCount = 0, loCount = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            loCount++;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            upCount++;
        }
    }

    if (upCount > loCount)
    {
        for (int i = 0; i < a.size(); i++)
        {
            char temp = toupper(a[i]);
            a[i] = temp;
        }
    }
    else if (upCount <= loCount)
    {
        for (int i = 0; i < a.size(); i++)
        {
            char temp = tolower(a[i]);
            a[i] = temp;
        }
    }
    cout << a << endl;

    // }
}
