#include <bits/stdc++.h>
using namespace std;

int main()
{
  int count; //test case
  string link;
  cin >> count; //test case input niscci

  for (int i = 1; i <= count; i++)
  {
    cin >> link; //link input nilam

    if (link[5] != ':') // 5 number index er sathe tulona
    {
      link.insert(4, "s"); // 4 tomo index a 'S' bosba .. Same vabe string er size increase hobe
      cout << "Case " << i << ": " << link << endl;
    }
    else
    {
      cout << "Case " << i << ": " << link << endl;
    }
  }
}
