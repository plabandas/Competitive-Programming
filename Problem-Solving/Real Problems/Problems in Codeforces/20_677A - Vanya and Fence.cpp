#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    int temp = 0; // this is very important for initialize value
    cin >> a >> b;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] > b)
        {
            temp = temp + 2;
        }
        else if (arr[i] <= b)
        {
            temp = temp + 1;
        }
    }
    cout << temp << endl;
}