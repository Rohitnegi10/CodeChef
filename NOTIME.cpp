#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,HoursNeed,RemainingTime;
    cin>>N>>HoursNeed>>RemainingTime;
    int TimeZone[N];
    for(int i =0; i<N; i++)
    {
        cin>>TimeZone[i];
    }
    int RequiredHours = HoursNeed - RemainingTime;

    for(int i =0; i<N; i++)
    {
        if(RequiredHours <= TimeZone[i])
            {
            
                cout<<"YES";
                return 0;
            }

    }
    cout<<"NO";
    return 0;

}
