#include <bits/stdc++.h>
using namespace std;
int main()
{
    int red, blue;
    int final_diff, final_same;
    cin >> red >> blue;

    if (red > blue)
    {
        final_diff = blue;
        final_same = (red - final_diff) / 2;
    }
    else if (red <= blue)
    {
        final_diff = red;
        final_same = (blue - final_diff) / 2;
    }
    cout << final_diff << " " << final_same << endl;
}