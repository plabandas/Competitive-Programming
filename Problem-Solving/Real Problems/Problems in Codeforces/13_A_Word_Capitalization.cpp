#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;

    char temp = a[0], temp1;
    temp1 = toupper(a[0]);
    a[0] = temp1;

    cout << a;
}
