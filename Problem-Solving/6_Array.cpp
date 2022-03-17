#include <bits/stdc++.h>
using namespace std;

int main()

{

    int b[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // the elements is identifing the arrays
    cout << "Fiveth element in this array :: " << b[4] << endl;
    b[4] = 0;
    cout << "Fiveth element in this array after define :: " << b[4] << endl;

    cout << "\n";
    cout << "\n";

    int n;
    int a[n];
    int sum = 0;
    cout << "Enter the array size and find the sumation of that numbers :: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value number " << i + 1 << " :: ";
        cin >> a[i];
        sum = sum + a[i];
    }

    cout << "The final sumation is :: " << sum << endl;
}
