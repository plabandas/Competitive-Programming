#include <bits/stdc++.h>
using namespace std;

// VERY IMPORTANT Base Case

// TRUST the function
// print "hello" n times
void say_hello(int n)
{
    if (n == 0) // Stopping case is here or Base Case Or Initial Condition
    {
        return; // Stopped
    }
    cout << "Hello " << n << endl;
    say_hello(n - 1);
}

// TRUST the function

void say_hello_1(int n)
{
    if (n == 0) // Stopping case is here or Base Case Or Initial Condition
    {
        return; // Stopped
    }

    say_hello_1(n - 1);
    cout << "Hello " << n << endl;
}

int main()
{
    // say_hello(2);
    say_hello_1(10);
}