#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> gift;
    int a, temp;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        cin >> temp;

        gift[temp] = i;
    }
    for (auto i : gift)
    {
        cout << i.second << " ";
    }
}