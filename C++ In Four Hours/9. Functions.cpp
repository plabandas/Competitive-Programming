#include <iostream>

using namespace std;

//main() ফাংশন এর ওপরে ফাংশনগুলো লিখতে হবে অথবা মেইন ফাংশন এর ওপরে ফাংশনের সিগনেচার লিখে  main()ফাংশন এর নিচে ফাংশন লেখা যাবে

void sayHi(string name, int age) ;  //এটা ফাংশনের সিগনেচার
double cube(double num) ;           //এটা ফাংশনের সিগনেচার

int main()
{
    sayHi("Plaban", 20);
    sayHi("Sumon", 21);
    sayHi("Niloy", 19);

    cout << cube(23.323);

    return 0 ;
}


void sayHi(string name, int age)  //এই ফাংশনটা কল করার সময় এই দুটো ডাটা পাচ করাতে হবে
{
//ভয়েড এর কোন রিটার্ন টাইপ নেই
    cout << "HI " << name << endl;
    cout << "He is " << age<< " Years old" << endl;
    cout << endl;

}
double cube (double num)
{
    double result = num*num*num;
    return result;  // এই ফাংশনটা এই ভ্যালুটা রিটার্ন করে দেবে
}




