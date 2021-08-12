#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> arr;
    vector<int> result
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    for(int i=n-k;i<n;i++)
    {
        result.push_back(arr[i]);
    }
    for(int i=0;i<n-k;i++)
    {
        result.push_back(arr[i]);
    }
    for(int i=0;i<n;i++)
        cout<<result[i]<<" ";

    return 0;
}
