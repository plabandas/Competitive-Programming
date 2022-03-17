#include <bits/stdc++.h>
using namespace std;

int main()

{

    int a; // this is the test case
    cin >> a;

    int b, c, sum;

    for (int i = 1; i <= a; i++)
    {
        cin >> b >> c;
        sum = b + c;

        cout << "Case " << i << ": "<< sum << endl ;
    }
}
