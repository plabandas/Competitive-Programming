#include <bits/stdc++.h>
using namespace std;
int main()
{
     int t; // this is test case
     cin >> t;
     int n, m;                    // here n defining te array size and m defining numbers of operation
     for (int i = 1; i <= t; i++) // this block is for test case
     {
          cin >> n >> m;
          int arr[n];
          for (int j = 0; j < n; j++) // this segments for array input
               cin >> arr[j];

          char op;
          int temp;
          for (int j = 1; j <= m; j++) // for operation
          {
               cin >> op;
               if (op == 'S') // for addition
               {
                    cin >> temp;
                    for (int i = 0; i < n; i++)
                    {
                         arr[i] = arr[i] + temp;
                    }
               }
               else if (op == 'M') // for multiply
               {
                    cin >> temp;

                    for (int i = 0; i < n; i++)
                    {
                         arr[i] = arr[i] * temp;
                    }
               }
               else if (op == 'D') // for devide
               {
                    cin >> temp;

                    for (int i = 0; i < n; i++)
                    {
                         arr[i] = arr[i] / temp;
                    }
               }
               else if (op == 'P') // for exchange the index value of array
               {
                    int a, b;
                    cin >> a >> b;
                    swap(arr[a], arr[b]);
               }
               else if (op == 'R') // for exchange the index value of array
               {
                    int x = 0;
                    int y = n - 1; // now x is first array index and y is last array index

                    while (x <= y)
                    {
                         swap(arr[x], arr[y]);
                         x++;
                         y--;
                    }
               }
          }

          cout << "Case " << i << ":" << endl;
          for (int k = 0; k < n; k++)
          {
               cout << arr[k] << " ";
          }
          cout << endl;
     }
}
