
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // ম্যাপ টা "কী ভ্যালু পেয়ার" হিসাবে থাকে
    map<string, double> cgpa; // ম্যাপ ডিক্লিয়ার করা হয়েছে
    cgpa["abrar"] = 3.84;
    cgpa["babul"] = 3.84;
    cgpa["rahim"] = 3.84; // এখানে রহিম হল "কী" আর ৩.৮৪ হল "ভ্যালু"
    cgpa["karim"] = 3.84;
    cgpa["munna"] = 3.84;

    auto ver1 = cgpa.begin(); // এটি একটি পয়েন্টার রিটার্ন করে
    auto ver2 = cgpa.rbegin();

    // যেহেতু cgpa.begin() ; এটি একটি পয়েন্টার রিটার্ন করে তাই ver1->first দিয়ে প্রথম অংশ এবং ver1->second দিয়ে দ্বিতীয় অংশ এক্সেস করতে হবে
    cout << "Name : " << ver1->first << " cgpa : " << ver1->second << endl;
    cout << "Name : " << ver2->first << " cgpa : " << ver2->second << endl;

    cout << "cgpa of munna is " << cgpa["munna"] << endl; //এস্পিসিফিক এলিমেন্ট এক্সেস করার জন্যে

    if (cgpa.empty()) // cgpa.empty() একটি বুলিয়ান ভ্যালু রিটার্ন করে
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "Not empty" << endl;
    }

    for (auto i : cgpa) // for_each loop এর মাধ্যমে পুরা ম্যাপ ট্রাভারস করা হয়েছে
    {
        // এখানে i হল ভেরিয়েবল , যার জন্যে i.first দিয়ে প্রথম অংশ এবং i.second দিয়ে দ্বিতীয় অংশ এক্সেস করতে হবে
        cout << "Name " << i.first << " cgpa : " << i.second << endl;
        // এটা প্রিন্ট করবে Dictionary/Lexicographic অরডার এ
    }

    // suppose :: তুমি এমন একটা এলিমেন্ট find করলে যা তোমার মেমোরিতে নাই, তখন এটি একটি আইটিরেটর রিটার্ন করবে যা end এর সমান
    //  cgpa.end() মানে হল অই এলিমেন্ট আমাদের ইন্ডেক্স এ নাই
    if (cgpa.find("abrar") == cgpa.end())
    {
        cout << "Not Found The Key" << endl;
    }
    else
    {
        cout << "Found Key" << endl;
    }

    cout << "Map Size : " << cgpa.size() << endl; //ম্যাপ এর সাইজ প্রিন্ট করা হয়েছে
    cgpa.clear();                                 // ম্যাপ ক্লিয়ার করা হয়েছে
    cout << "Map Size after clear : " << cgpa.size();
}