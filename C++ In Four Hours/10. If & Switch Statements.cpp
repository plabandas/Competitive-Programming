#include <iostream>

using namespace std;

void myIf(bool isMale, bool isTall)
{
    if(isMale && isTall) //AND  //দুইটা কন্ডিশন একসাথে সত্য হতে হবে
    {
        cout<< "AND :: You are a Tall Male" ;
    }
    else if(isMale || isTall) //OR //দুইটা কন্ডিশনের একটি অবশ্য সত্য হতে হবে
    {
        cout<< "OR :: You are a Tall Male" ;
    }
    else if(isMale && !isTall) //NOT
    {
        cout<< "OR :: You are not Tall Male" ;
    }
    else
    {
        cout<< "You are not Male not tall" ;
    }
}

int getMax(int num1, int num2)
{
    int result ;

    if(num1>num2)
    {
        result = num1;
    }
    else
    {
        result = num2 ;
    }
    return result ;
}

string getDateOfWeek()
{
    string dayName ;

    int dayNum ;
    cout << "Enter a Day_Number(0-2) :: " ;
    cin>> dayNum ;

    switch(dayNum)
    {
    case 0 :
        dayName = "Friday" ;
        break;
    case 1 :
        dayName = "Saturday" ;
        break;
    case 2 :
        dayName = "Sunday" ;
        break;
    default :
        dayName = "INVALID" ;
        break;
    }
    cout << "The day is " << dayName;

}

int main()
{

    myIf(true,true);
    cout << endl;
    cout << "This is the higher ::: " << getMax(21,222);

    cout << endl ;


    getDateOfWeek(); //Switch Case //দিনের নাম বের করে নেয়া হয়েছে এই মেথড কে কল করে


    return 0 ;
}

