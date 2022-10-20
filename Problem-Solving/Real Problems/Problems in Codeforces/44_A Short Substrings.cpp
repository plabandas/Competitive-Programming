#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    string s;
    vector<char> plaban;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        cin >> s;
        for (int i = 0; i < s.size() - 2; i = i + 2)
        {
            plaban.push_back(s[i]);
        }
        for (auto i : plaban)
        {
            cout << i;
        }
        cout << s[s.size() - 2] << s[s.size() - 1] << endl;
        plaban.clear();
    }
}