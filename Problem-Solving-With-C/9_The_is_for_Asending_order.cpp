#include <stdio.h>
int main()
{
    int n;
    printf("How many number do you want to enter = "); // n হল ইউজার ইনপুট
    scanf("%d", &n);

    int ara[n];
    int i, j, min, max;

    for (i = 0; i < n; i++) // 5টা ইনপুট দিলে লুপ পাচ বার চলবে
    {
        scanf("%d", &ara[i]);
    }

    // ধরি ১,২,৩ ইনপুট দিয়েছি
    max = min = ara[0];
    for (i = 0; i < n; i++)
    {
        if (ara[i] > max)
            max = ara[i]; // এখানে সব চেয়ে কম সঙ্খা থেকে যাবে
    }
    for (i = 0; i < n; i++)
    {
        if (ara[i] < min)
        {
            min = ara[i]; // এখানে সব চেয়ে কম সঙ্খা থেকে যাবে
        }
    }

    printf("\nAscending = ");

    for (j = min; j <= max; j++) // সব চেয়ে কম এবং সব চেইয়ে বড় সংখা এর মধ্যে লুপ চলবে
    {
        for (i = 0; i < n; i++)
        {

            if (j == ara[i]) // এরে এলিমেন্ট এর সাথে কম্পেইয়ার করে অউতপুট প্রিন্ট করা হয়েছে
            {
                // min = ara[i];
                printf("%d ", ara[i]);
            }
        }
    }
}