#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a, min, max;
    cout << "Enter the array size :: ";
    cin >> a;

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    } 
    
    cout << endl;

    min = max = arr[0];
    for (int i = 0; i < a; i++)
    {
        if (arr[i] > max)
        {                 // max er modda asaign hoscca so ata age dita hoba
            max = arr[i]; // highest numbe got
        }
    } 
    for (int i = 0; i < a; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i]; // small number got
        }
    }

    cout << "Ascending Order with C++ :: ";

    for (int j = min; j <= max; j++)
    {
        for (int i = 0; i < a; i++) // ata dara array er 5 ta element er sathe check korchi
        {
            if (j == arr[i])
            {
                cout << arr[i] << " ";
            }
        }
    }
}
