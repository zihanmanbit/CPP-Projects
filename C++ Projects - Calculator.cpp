///ZM///
#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,r;
    char c;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Enter an operation: ";
    cin>>c;
    if(c!='+'&&c!='-'&&c!='*'&&c!='/')
        cout<<"Invalid operation. Enter the operators '+','-','*' or '/'."<<endl;
    else
    {
        if(c=='+')
            r=a+b;
        else if(c=='-')
            r=a-b;
        else if(c=='*')
            r=a*b;
        else
            r=a/b;
        cout<<"The answer is: "<<r<<endl;
    }
    return 0;
}
