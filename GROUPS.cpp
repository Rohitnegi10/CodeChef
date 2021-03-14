#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int Groups(vector<int> input)
{
    int n = input.size();

    int count=0;

    for (int i =0; i<n; i++)
    {
        if(input[i]==1  && ((i-1 == -1 ) || input[i-1]==0 ) )
            count++;
    }   
    return count; 
}


int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string input;
        cin>> input;
        int n = input.size();
        vector<int> arr(n);
        for(int i =0; i<n; i++)
        {
            if(input[i]=='0')
                arr[i]=0;
            else
                arr[i]=1;
        }

        cout<<Groups(arr)<<endl;

    }
    return 0;
}