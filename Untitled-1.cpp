#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main()
{
    int a, sum = 0, arr[a], p;

    cin >> a;

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }

   
    cout << sum << endl;
}