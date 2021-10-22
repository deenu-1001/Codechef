//Codechef
//Pass or Fail 
//Problem Code: PASSORFAIL

#include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int n,p,x;
        cin>>n>>p>>x;
        int marks=(3*p)-(n-p);
        if(marks>=x)
            cout<<"PASS\n";
        else
            cout<<"FAIL\n";
    }
}