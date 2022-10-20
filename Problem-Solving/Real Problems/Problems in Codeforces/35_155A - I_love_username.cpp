#include <bits/stdc++.h>
using namespace std;
int main()
{

    int test, counter = 0, max = 0, min = 0;
    bool tr = true;

    cin >> test;
    int arr[test];

    for (int i = 0; i < test; i++)
    {
        cin >> arr[i];
        if (tr == true)
        {
            max = arr[i];
            min = arr[i];
            tr = false;
        }

        if (arr[i] > max)
        {
            counter++;
            max = arr[i];
        }
        if (arr[i] < min)
        {
            counter++;
            min = arr[i];
        }
    }
    cout << counter << endl;
}