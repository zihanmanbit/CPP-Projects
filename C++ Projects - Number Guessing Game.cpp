///ZM///
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double num=0,n=rand();
    cout<<"GUESS THE NUMBER.\n"<<endl<<"Enter your number: ";
    cin>>num;
    while(num>=n||num<=n)
    {
        if(num>n)
        {
            num=0;
            cout<<"Your guessed number is too high.\n"<<endl<<"Guess another number: ";
            cin>>num;
        }
        else if(num<n)
        {
            num=0;
            cout<<"Your guessed number is too low.\n"<<endl<<"Guess another number: ";
            cin>>num;
        }
        else
        {
            cout<<"You guessed the correct number."<<endl;
            break;
        }
    }
    return 0;
}
