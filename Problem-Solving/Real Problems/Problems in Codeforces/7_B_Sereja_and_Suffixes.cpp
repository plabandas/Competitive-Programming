#include <bits/stdc++.h>
using namespace std;

int main()
{

    // 8 3  //টেস্ট কেচ
    // 8 6 4 3 4 2 4 8  // নাম্বার গুলো
    // 6 4 2  // এই ইন্ডেক্স থেকি কইটা ডিসটিঙ্ক এলিমিন্ট আছে তা দেখাতে হবে
    // Answer 3 4 5

    int value, test;

    cin >> value >> test; //টেস্ট কেচ ইনপুট

    int arr[value + 1], index[value + 1];

    for (int i = 1; i <= value; i++) // দ্বিতীয় লাইন ইনপুট নেওয়া হয়েছে
    {
        cin >> arr[i];
    }

    set<int> elements; // ৩য় লাইন থেকে ডিসটিঙ্ক এলিমেন্ট বের করে সেভ করা হয়েছে যা ইন্ডেক্স[] মধ্যে সেভ আছে
    for (int i = value; i >= 1; i--)
    {
        elements.insert(arr[i]);
        index[i] = elements.size();
    }

    for (int i = 1; i <= test; i++)
    {
        int inx;
        cin >> inx;

        // প্রতিটা কেস এর জন্নে এই কমেন্ট ব্লক টা রান হসচ্ছিলো জার জন্যে বেশি টাইম লাগসিল ; যার জন্যে বেশি টাইম লাগসিল ; ERROR : Time limit exceeded on test 11
        // set<int> elements;
        //  for (int i = inx; i <= value; i++)
        //  {
        //      elements.insert(arr[i]);
        //  }
        cout << index[inx] << endl;
    }
}