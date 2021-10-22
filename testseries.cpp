//Codechef
//Test Match Series 
//Problem Code: TESTSERIES

#include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    while (testCase--)
    {
        int a[5],countI=0,countE=0;
        for (int i = 0; i < 5; i++)
        {
            cin>>a[i];
            if(a[i]==1)
                countI++;
            else if(a[i]==2)
                countE++;
        }
        if(countI>countE)
            cout<<"INDIA\n";
        else if(countI<countE)
            cout<<"ENGLAND\n";
        else
            cout<<"DRAW\n";
    }
}