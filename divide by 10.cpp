#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int> result;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%10!=0)
        {
            result.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%10==0)
        {
            result.push_back(arr[i]);
        }
    }
    for(int i=0;i<n;i++)
    {
       cout<<result[i]<<" ";
    }
}
