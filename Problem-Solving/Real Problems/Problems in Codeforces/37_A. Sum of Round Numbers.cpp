#include <bits/stdc++.h>
using namespace std;

int steps(int a)
{
    int counter = 0;
    int temp;
    int i = a;
    while (i != 0)
    {
        temp = a % 10;
        if (temp != 0)
        {
            counter++;
        }
        a = a / 10;
        i = a;
    }
    return counter;
}

int main()
{
    int test, input, step;
    cin >> test;

    for (int j = 0; j < test; j++)
    {

        vector<int> vec;
        vector<int> value;

        cin >> input;
        step = steps(input);

        cout << step << endl;

        int counter = 0, temp, position = 0;
        int a = input;
        int i = a;
        while (i != 0)
        {
            position++;
            temp = a % 10; // here got the value
            if (temp != 0)
            {
                counter++;
                vec.push_back(position); // here got the position
                if (position == 1)
                {
                    value.push_back(temp);
                }
                else if (position == 2)
                {
                    value.push_back(temp * 10);
                }
                else if (position == 3)
                {
                    value.push_back(temp * 100);
                }
                else if (position == 4)
                {
                    value.push_back(temp * 1000);
                }
                else if (position == 5)
                {
                    value.push_back(temp * 10000);
                }
            }
            a = a / 10;
            i = a;
        }
        for (auto i : value)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}