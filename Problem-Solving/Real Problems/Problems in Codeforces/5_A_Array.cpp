#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x; // n is number of input integer
              // x is input value by user
    cin >> n;
    vector<int> neg, pos, zero; // ja array ar size jana na thake tader kethrey vector use korte hoy

    for (int i = 0; i < n; i++)
    {
        cin >> x;

        if (x < 0) // positive user input guso akhane save hove
            neg.push_back(x);

        else if (x > 0) // negative user input gulo akhane save hobe
            pos.push_back(x);

        else // zero akhane input hobe
            zero.push_back(x);
    }

    if (pos.empty())
    // jodi pos empty hoy taile amra negative thakr duita value ane positive kora hoyacha
    {
        pos.push_back(neg[neg.size() - 1]);
        neg.pop_back();
        pos.push_back(neg[neg.size() - 1]);
        neg.pop_back();
    }

    if (neg.size() % 2 == 0)
    { // jodi negative balue *even sonka poriman* hoy taila akta value zero te transffer korta hoba ,, taile product negative thakbe
        zero.push_back(neg[neg.size() - 1]);
        neg.pop_back();
    }

    cout << neg.size() << " ";
    for (int i : neg)
        cout << i << " ";
    cout << endl;

    cout << pos.size() << " ";
    for (int i : pos)
        cout << i << " ";
    cout << endl;

    cout << zero.size() << " ";
    for (int i : zero)
        cout << i << " ";
    cout << endl;
}