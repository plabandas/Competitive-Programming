#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    //হাতে লেখা নোট টা ফলো করতে হবে

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i]; //এ্যারে ইনপুট নেওয়া হয়েছে কিন্তু এটা সরটেড না
    }

    int l = 0, r = n - 1, m;

    int key;
    cout << "Enter number for Binary Search : ";
    cin >> key;

    while (l <= r)
    {
        m = (l + r) / 2;
        if (arr[m] == key)
        {
            cout << "Found the value in Array";
            break;
        }
        else if (arr[m] > key)
        {
            r = r - 1;
        }
        else if (arr[m] < key)
        {
            l = l + 1;
        }
    }
    if (l > r)
    {
        cout << "Not Found";
    }
}