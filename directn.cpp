//Codechef
//Professor And Directions 
//Problem Code: DIRECTN

#include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int n,flag=0;
        cin>>n;
        string s;
        cin>>s;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]==s[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}