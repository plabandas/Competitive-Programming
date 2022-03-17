#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 6 first     output : ok
    //     first     output : first1
    //         second     output : ok
    //             second     output : second1
    //                 third     output : ok
    //                     third     output : third1

    // solution : 1. if the name is present -> ok
    //            2. if name is present -> name count(total number of same name is inserted before)

    //নোট ঃঃ ম্যাপ কাজ করে "কী ভ্যালু পেয়ার" নিয়ে

    int n;
    cin >> n;
    string name;

    map<string, int> database; // ম্যাপ ডিক্লিয়ার করা হয়েছে

    for (int i = 1; i <= n; i++)
    {
        cin >> name; // ম্যাপ এর কী ইনপুট নেওয়া হয়েছে
        if (database.find(name) == database.end())
        {
            cout << "OK" << endl;
            database[name] = 1; //যদি ভ্যালু না পাই ডাটাবেস এ তাইলে , সেভ করে তার ইন্টিজার ভ্যালু ১ সেট করবে
        }
        else
        {
            // suppose :: ডাটাবেস এ পাইলো না , তখন  সে "কী and ভ্যালু" প্রিন্ট করবে
            cout << name << database[name] << endl;
            database[name]++; // অই "কী" এর রেসপেক্টের ভ্যালু ১ বাড়ায়ে ডাটাবেস এ Insert করবে
        }
    }
}