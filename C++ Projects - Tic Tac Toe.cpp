///ZM///
#include<bits/stdc++.h>
using namespace std;
char a[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int flag=0,cntX=0;
void display()
{
    cout<<"     |     |     "<<endl<<"  "<<a[0][0]<<"  |  "<<a[0][1]<<"  |  "<<a[0][2]<<"  "<<endl<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl<<"  "<<a[1][0]<<"  |  "<<a[1][1]<<"  |  "<<a[1][2]<<"  "<<endl<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl<<"  "<<a[2][0]<<"  |  "<<a[2][1]<<"  |  "<<a[2][2]<<"  "<<endl<<"     |     |     "<<endl;
}
void player1()
{
    char num1;
    cout<<"Player 1. Enter the number where you want to cross: ";
    cin>>num1;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j]==num1)
            {
                a[i][j]='X';
                cntX++;
                break;
            }
        }
    }
    display();
}
void player2()
{
    char num2;
    cout<<"Player 2. Enter the number where you want to circle: ";
    cin>>num2;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(a[i][j]==num2)
            {
                a[i][j]='O';
                break;
            }
        }
    }
    display();
}
void check()
{
    if(a[0][0]=='X'&&a[1][1]=='X'&&a[2][2]=='X')
    {
        cout<<"Game Over. Player 1 has won."<<endl;
        flag=1;
    }
    else if(a[0][0]=='O'&&a[1][1]=='O'&&a[2][2]=='O')
    {
        cout<<"Game Over. Player 2 has won."<<endl;
        flag=1;
    }
    else if(a[0][2]=='X'&&a[1][1]=='X'&&a[2][0]=='X')
    {
        cout<<"Game Over. Player 1 has won."<<endl;
        flag=1;
    }
    else if(a[0][2]=='O'&&a[1][1]=='O'&&a[2][0]=='O')
    {
        cout<<"Game Over. Player 2 has won."<<endl;
        flag=1;
    }
    else if(a[0][0]=='X'&&a[0][1]=='X'&&a[0][2]=='X')
    {
        cout<<"Game Over. Player 1 has won."<<endl;
        flag=1;
    }
    else if(a[0][0]=='O'&&a[0][1]=='O'&&a[0][2]=='O')
    {
        cout<<"Game Over. Player 2 has won."<<endl;
        flag=1;
    }
    else if(a[1][0]=='X'&&a[1][1]=='X'&&a[1][2]=='X')
    {
        cout<<"Game Over. Player 1 has won."<<endl;
        flag=1;
    }
    else if(a[1][0]=='O'&&a[1][1]=='O'&&a[1][2]=='O')
    {
        cout<<"Game Over. Player 2 has won."<<endl;
        flag=1;
    }
    else if(a[2][0]=='X'&&a[2][1]=='X'&&a[2][2]=='X')
    {
        cout<<"Game Over. Player 1 has won."<<endl;
        flag=1;
    }
    else if(a[2][0]=='O'&&a[2][1]=='O'&&a[2][2]=='O')
    {
        cout<<"Game Over. Player 2 has won."<<endl;
        flag=1;
    }
    else if(a[0][0]=='X'&&a[1][0]=='X'&&a[2][0]=='X')
    {
        cout<<"Game Over. Player 1 has won."<<endl;
        flag=1;
    }
    else if(a[0][0]=='O'&&a[1][0]=='O'&&a[2][0]=='O')
    {
        cout<<"Game Over. Player 2 has won."<<endl;
        flag=1;
    }
    else if(a[0][1]=='X'&&a[1][1]=='X'&&a[2][1]=='X')
    {
        cout<<"Game Over. Player 1 has won."<<endl;
        flag=1;
    }
    else if(a[0][1]=='O'&&a[1][1]=='O'&&a[2][1]=='O')
    {
        cout<<"Game Over. Player 2 has won."<<endl;
        flag=1;
    }
    else if(a[0][2]=='X'&&a[1][2]=='X'&&a[2][2]=='X')
    {
        cout<<"Game Over. Player 1 has won."<<endl;
        flag=1;
    }
    else if(a[0][2]=='O'&&a[1][2]=='O'&&a[2][2]=='O')
    {
        cout<<"Game Over. Player 2 has won."<<endl;
        flag=1;
    }
}
void game()
{
    display();
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            while(a[i][j]>='1'&&a[i][j]<='9'&&flag==0&&cntX!=5)
            {
                if(flag==0&&cntX!=5)
                    player1(),check();
                if(flag==0&&cntX!=5)
                    player2(),check();
            }
        }
        if(flag==1||cntX==5)
            break;
    }
    if(flag==0)
    {
        cout<<"Game Over. The match is a draw."<<endl;
    }
}
int main()
{
    game();

    string s;
    cout<<"\nDo you want to play again? Enter 'Yes' or 'No': ";
    cin>>s;
    if(s=="Yes"||s=="YES"||s=="yes")
        cout<<"\nTo restart the game, run the program again."<<endl;
    else if(s=="No"||s=="NO"||s=="no")
        cout<<"\nGood game. Feel free to play again."<<endl;

    return 0;
}
