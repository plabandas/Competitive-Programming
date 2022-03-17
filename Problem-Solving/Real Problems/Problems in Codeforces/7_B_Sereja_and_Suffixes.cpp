#include <bits/stdc++.h>
using namespace std;

int main()
{

    // 8 3
    // 8 6 4 3 4 2 4 8
    // 6 4 2
    // Output 0 0 2
    // Answer 3 4 5

    int value, test;

    cin >> value >> test;

    int arr[value + 1];

    for (int i = 1; i <= value; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= test; i++)
    {
        int inx;
        cin >> inx;
        set<int> elements;
        for (int i = inx; i <= value; i++)
        {
            elements.insert(arr[i]);
        }
        cout << elements.size() << endl;
    }
}