#include<iostream>
using namespace std;
int main()
{

  int age;
  cout << "Enter Your Age :: ";
  cin >> age;
  cout << "You are " << age << " years old" << endl;

  string name;
  cout << "Enter Your Name :: ";
   cin >> name ;  //এটা দিলে ইউজার ইনপুটের পুরো লাইনের প্রথম শব্দটা ইনপুট হবে
  //getline(cin, name); //এটা দিলে ইউজার ইনপুটের পুরো লাইন ইনপুট হবে
  cout << "Your name is " << name << endl;

  cout << "Welcome :: " << name << endl;
}
