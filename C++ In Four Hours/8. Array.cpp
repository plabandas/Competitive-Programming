#include <iostream>

using namespace std;

int main()
{
    int luckyNums[20] = {1,2,3,4}  ;

    cout << luckyNums[0] << endl ;

    luckyNums[0]  = 34;   //এটা দিয়ে জিরো তম ইন্ডেক্স রিপ্লেস হয়ে যাবে

    cout << luckyNums[1] << endl ;
    return 0 ;
}

