#include <bits/stdc++.h>
using namespace std;

int main()
{
    int id;
    string name;

    pair<int, string> person; //একটা পেয়ার তৈরি করা হয়েছে , যেখানে নাম্বার আর নাম থাকতে পারে
    person = {id, name};      // এটা হল অই পেয়ার এর হেডলাইন

    vector<pair<int, string>> list; //এটা দিয়ে একটা ভেক্টর টাইপ এর এ্যরে তৈরি করা হয়েছে ; যা পেয়ার টাইপ এর ডাটা Receive করে
    list.push_back({1, "a"});
    list.push_back({2, "b"});
    list.push_back({3, "c"}); // ডাটা ইনসার্ট হসছে
    list.push_back({4, "d"});
    list.push_back({5, "e"});

    auto it = list.begin();
    for (; it != list.end(); it++)
    {
        // যেহেতু list.begin() ; এটি একটি পয়েন্টার রিটার্ন করে তাই it->first দিয়ে প্রথম অংশ এবং it->second দিয়ে দ্বিতীয় অংশ এক্সেস করতে হবে
        cout << "neme = " << it->second << " id = " << it->first << endl;
    }

    cout << endl;

    for (auto it : list)
    { // এখানে it হল ভেরিয়েবল , যার জন্যে it.first দিয়ে প্রথম অংশ এবং it.second দিয়ে দ্বিতীয় অংশ এক্সেস করতে হবে
        cout << "For Each Loop :: neme = " << it.second << " id = " << it.first << endl;
    }

    cout << endl;

    //এখানে প্রথমে তৈরে করা ভ্যারিয়েবল এর মধ্যে ডাটা আনা হয়েছে ভেক্টর অ্যারে থেকে
    // এখানে person হল ভেরিয়েবল , যার জন্যে i.first দিয়ে প্রথম অংশ এবং i.second দিয়ে দ্বিতীয় অংশ এক্সেস করতে হবে
    person = list[3]; // ৩য় নাম্বার ইন্ডেক্স মানে (০-১-২-"৩") স্টোর হবে
    cout << "Name of Number 3 Index : " << person.first << " And His id =  " << person.second << endl;
}