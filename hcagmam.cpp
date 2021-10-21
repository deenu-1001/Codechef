//Codechef
//Chef And Salary Pay 
//Problem Code: HCAGMAM1

#include <iostream>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    while(testCase--)
    {
        int x,y,streak=0,lastStreak=0,workingDay=0;
        cin>>x>>y;
        string s;

        cin>>s;
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]=='1')
            {
                workingDay++;
                streak++;
                if(lastStreak<streak)
                    lastStreak=streak;
            }
            else
            {
                streak=0;
            }
        }
        int salary=(workingDay*x) + (lastStreak*y);
        cout<<salary<<"\n";
    }
}