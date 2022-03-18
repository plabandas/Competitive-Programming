#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 5 5
    // 3 2 1 0 0 //here output:: 3

    // 8 5
    // 10 9 8 7 7 7 5 5  //here output :: 6

    int a,
        b, count = 0, value;

    cin >> a >> b;
    int arr[a];

    for (int i = 1; i <= a; i++)
    {
        cin >> arr[i];
    }

    int temp = arr[b];

    for (int i = 1; i <= a; i++)
    {
        if (arr[i] >= temp && temp != 0)
        {
            count++;
        }
        else if (temp == 0)
        {
            count = 0;
            for (int i = 1; i <= a; i++)
            {
                if (arr[i] > temp)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
}