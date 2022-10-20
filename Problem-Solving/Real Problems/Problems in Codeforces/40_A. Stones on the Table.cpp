#include <bits/stdc++.h>
using namespace std;

int main()
{
    int length, counter = 0;
    bool tr = true, fl = false;
    cin >> length;
    char ch, temp;
    for (int i = 0; i < length; i++)
    {
        cin >> ch;
        if (fl == true) // 1st time false then always true
        {
            if (temp == ch)
            {
                counter++;
                temp = ch;
            }
            else
            {
                temp = ch;
            }
        }

        if (tr == true) // 1st time true then always false
        {
            fl = true;
            tr = false;
            temp = ch;
        }
    }
    cout << counter << endl;
}
