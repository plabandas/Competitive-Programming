#include <bits/stdc++.h>
using namespace std;

int main()

{ 
      int input,b, i,j;
      
      cin >> input;

      int arr[4];

    while(j>input){

     int p = arr[0] = input%10 ;
     int q = arr[1] = (input/10)%10;
     int r = arr[2] = (input/100)%10;
     int s = arr[3] = (input/1000)%10;

    if(p==q){ j++ ;
          continue;                 }
    else if(p==r){}
    else if(p==s){}
    else if(q==r){}

    
    else if(q==s){}
        else if(r==s){} 
    else{
              cout<< "Unique" ;

    }

    }
      
     
       
}
