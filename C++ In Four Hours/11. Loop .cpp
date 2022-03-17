#include <iostream>
using namespace std;

void loop()
{
    int for_index = 0 ;
    int while_index = 0 ;
    int do_while_index = 0 ;

    for(for_index  ; for_index <=2 ; for_index++)
    {
        cout << "For Loop Running OK" << endl;
    }

    cout << endl;

    while(while_index<=2)
    {
        cout << "While Loop Running OK" << endl ;
        while_index++ ;
    }

    cout << endl;

    do
    {
        cout << "Do-While Loop Running OK" << endl ;
        do_while_index++;
    }
    while(do_while_index<=2);

    cout << endl;

    do
    {
        cout << "Do-While Loop *This Loop must run once if the condition is false*" << endl ;
        do_while_index++;
    }
    while(do_while_index <= -1);
}


void secretNumberGAME()
{
    int secretNum = 7 ;
    int guess ;
    int guessCount = 0 ;

    while(guess != secretNum)
    {

        cout << "Guess A Secret Number :: " ;
        cin >> guess;
        guessCount = guessCount + 1 ;
        if(guessCount >=2)
        {
            cout << "****Failed -- You crossed trying limit****" ;
            break;
        }
        if(guess == secretNum)
        {
            cout << "****Congratulations -- You Win****" ;
            break;
        }

    }


}

void printARRAY()
{

    int num[] = {1,2,3,4,5,6,7,8,34,434,5,4,6565,3,5} ;

    cout << "Your Inputed Array size :: " << size(num);
    cout << endl;
    cout<< "Array elements :: " ;
    for(int i =0 ; i< 15 ; i++ )
    {
        cout <<  num[i] << " ";
    }



}


int main()
{
    loop();
    cout << endl;
    secretNumberGAME();
    cout<< endl;
    cout<< endl;
    printARRAY();


    return 0 ;
}

