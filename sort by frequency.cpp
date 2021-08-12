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
    multiset<pair<int,int>> m;
    for(int i=0;i<n;i++)
    {
        //int r = arr[i];
            int x = count(arr,arr+n,arr[i]);
            m.insert({-(x),arr[i]});
    }
    for(auto &it : m)
        cout<<it.second<<" ";
    return 0;
}
