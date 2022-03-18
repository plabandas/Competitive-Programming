#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "bangladesh";

    // string iterators
    // আইটিরেটর মানে হল একটি ইন্ডেক্স থেকে অন্য ইন্ডেক্স এ জেতে পারা(যেমন ঃ স্ট্রিং এর প্রতিটি ক্যারেক্টার এ যেতে পারা)
    cout << "first element is = " << *(str.begin()) << endl;
    cout << "Last element is = " << *(str.rbegin()) << endl; // rbegin() মানে হল রিভারস বিগিন
    for (auto it = str.begin(); it != str.end(); it++)
    { // auto  এর মাধ্যমে প্রোগ্রাম বুঝে জাসছে যে , এটি স্ট্রিং টাইপ এর আইটিরেটর
        cout << *it << " ";
        // only it (আইটিরেটর) দ্বারা কম্পিউটার এ এর মেমোরি অ্যাড্রেস বোঝাই । কিন্তু এর ভ্যালু access করার জন্যে এস্টারিক সিম্বল ইউজ করা হয়
    }
    cout << endl;
    cout << endl;

    // string modifire
    str = str + " beats india"; // স্ট্রিং এর শেষে কিছু যোগ করা
    cout << str << endl;

    str.push_back('1'); // স্ট্রিং এর শেষে একটি ক্যারেক্টার যোগ করার জন্যে
    cout << str << endl;

    str.pop_back(); // স্ট্রিং এর শেষে একটি ক্যারেক্টার মোছার জন্যে
    cout << str << endl;

    str.insert(str.begin() + 3, '3'); // ৩ নাম্বার ইন্ডেক্স এ একটি ভ্যালু ইনসার্ট করার জন্যে (অ্যারে সাইজ বাড়বে)
    cout << str << endl;

    str.erase(str.begin() + 3); // ৩ নাম্বার ইন্ডেক্স এ একটি ভ্যালু ডিলিট করার জন্যে (অ্যারে সাইজ কমবে)
    cout << str << endl;

    // String Operation
    //স্ট্রিং এর ভ্যালু string::nops এর সমান হওয়া মানে , অই স্ট্রিং টা খুজে পাওয়া যাই নাই
    //  string::nops এর ভ্যালু  -1  :: হল scope resolution অপারেটর
    if (str.find("desh") != string::npos)
    {
        cout << " desh is present" << endl;
    }
    else
    {
        cout << "desh is not present" << endl;
    }

    cout << "substring from 3to3 is " << str.substr(3, 3) << endl;
    // substr(3,3) মানে হল ৩য় ইন্ডেক্স থেকে ৩ টা ক্যারেক্টার নিয়ে একটি subString তৈরি করবে

    // String capacity
    cout << "size is = " << str.size() << endl;
    if (!str.empty())
    {
        cout << "not empty" << endl;
    }
    else
    {
        cout << "empty" << endl;
    }
    str.clear();
    cout << "String after Clear : " << str << endl;
}