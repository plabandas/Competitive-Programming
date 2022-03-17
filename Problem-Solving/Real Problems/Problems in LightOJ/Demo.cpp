#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m;
    for (int k = 1; k <= t; k++)
    {
        cin >> n >> m;
        int arr[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];

        char op;
        int temp;
        for (int j = 1; j <= m; j++)
        {
            cin >> op;
            if (op == 'S')
            {
                cin >> temp;
                // add temp to every element of the array
                for (int i = 0; i < n; i++)
                    arr[i] += temp;
            }
            else if (op == 'M')
            {
                cin >> temp;
                // multiply temp to every element of the array
                for (int i = 0; i < n; i++)
                    arr[i] *= temp;
            }
            else if (op == 'D')
            {
                cin >> temp;
                // divide temp to every element of the array
                for (int i = 0; i < n; i++)
                    arr[i] /= temp;
            }
            else if (op == 'P')
            {
                int x, y;
                cin >> x >> y;

                // a[x] = 2 a[y] = 3 swap-> a[x] = 3 a[y] = 2
                swap(arr[x], arr[y]);
            }
            else if (op == 'R')
            {
                // reverse the arry
                int x = 0, y = n - 1;
                while (x <= y)
                {
                    swap(arr[x], arr[y]);
                    x++;
                    y--;
                }
            }
        }
        cout << "Case " << k << ":" << endl;  // k define the case number
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
            if (i < n - 1)
                cout << " ";
        }
        cout << endl;
    }
}
