#include <bits/stdc++.h>
using namespace std;

int main()

{

    set<int> s; //সেট এ ইউনিক এলিমেন্ট সরটেড হয়ে সেভ হয়

    s.insert(3); //৫ নাম্বার এলিমেন্ট এবং ১ম এলিমেন্ট একই
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3); //৫ নাম্বার এলিমেন্ট এবং ১ম এলিমেন্ট একই

    s.erase(5); // ৫ যে ইনডেক্স এ আছে অই ইনডেক্স মুছে যাবে 

    cout << "Size :: " << s.size() << endl;

    //১ম এলিমেন্ট প্রিন্ট করার জন্নে
    // s.begin() এটা এক ধরনের পয়েন্টার এটা নিয়ে কাজ করতে হলে একটা  স্টার দিতে হবে
    cout << "First element :: " << *s.begin() << endl;

    cout << "Last element :: " << *s.rbegin() << endl;

    for (int i : s)
        cout << i << " ";

    cout << endl;

    //এটি একটি আইটিরেটর(pointer) রিটার্ন করে যদি না পাই এলিমেন্ট টা তখন set.end() রিটার্ন করবে
    if (s.find(3) == s.end())
    {
        cout << "Not found";
    }
    else
        cout << "Found";
}
