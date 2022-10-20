#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test, count = 0;
    cin >> test;
    string input;

    for (int i = 0; i < test; i++)
    {
        cin >> input;

        if (input == "Tetrahedron")
        {
            count = count + 4;
        }
        else if (input == "Cube")
        {
            count = count + 6;
        }
        else if (input == "Octahedron")
        {
            count = count + 8;
        }
        else if (input == "Dodecahedron")
        {
            count = count + 12;
        }
        else if (input == "Icosahedron")
        {
            count = count + 20;
        }
    }
    cout << count << endl;
}