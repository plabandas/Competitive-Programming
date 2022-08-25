#include <bits/stdc++.h>
using namespace std;

int main()
{

    int cnt = 0;
    int temp, result;
    set<int> s;
    for (int i = 0; i < 4; i++)
    {
        cin >> temp;
        if (s.find(temp) == s.end())
        {
            cnt++;
            s.insert(temp);
        }
    }
    result = 4 - cnt;
    cout << result << endl;
}