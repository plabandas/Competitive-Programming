#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[25 + 1], count = 1, finder;

    for (int i = 1; i <= 25; i++)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            finder = i;
        }
    }

    // finding row and collom

    int row, coloum;
    if (finder % 5 == 0)
    {
        coloum = 5;
        row = finder / 5;
    }
    else
    {
        coloum = 0;
        row = 0;
        coloum = finder % 5;
        row = (finder / 5) + 1;
    }

    int result = (abs(3 - row)) + (abs(3 - coloum));
    cout << result;
}