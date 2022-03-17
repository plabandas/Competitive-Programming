
#include<iostream>
#include<cmath>


using namespace std ;

int main ()
{
    string phrase = "Plaban Academy" ;
    cout << phrase << endl ;

    cout << phrase.length() << endl;  // this will print the size of string

    cout << phrase[0] << endl; // this function access the specific character in the string array

    cout << phrase.find("Academy", 0) << endl;   //this will show , Academy word starts from which index
    // 0 means :: কত নাম্বার ইন্ডেক্স থেকে এটি সার্চিং শুরু করবে

    cout << phrase.substr(0,2) << endl;  //এটা প্রিন্ট করবে 0 নাম্বার ইনডেক্স থেকে 2 নাম্বার ইন্ডেক্স পর্যন্ত




    //   Working with numbers

    cout << "Power Function :: " << pow(2,3) << endl ;

    cout << "Square root :: " << sqrt(25) << endl ;

    cout << "Round Number with lowest :: " << round(2.444) << endl ;
       //round() , floor() এই দুটো রাউন্ড করে দিবে লোয়েস্ট নাম্বারের সাথে ,,  ceil() এটা রাউন্ড করে দেবে হায়েস্ট নাম্বারের সাথে
    cout << "Round Number with highest :: " << ceil(2.444) << endl ;
    cout << "Round Number with lowest :: " << floor(2.444) << endl ;

    cout << "Highest number of two numbers :: " << fmax(3,11) << endl ;
    cout << "Lowest Number of two numbers :: " << fmin(3,11) << endl ;










    return 0 ;

}

