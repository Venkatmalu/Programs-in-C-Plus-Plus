#include<bits/stdc++.h>

using namespace std;

int main()
{
    //pair array...
    vector<pair<int,int>> p;
    int arr[100];
    int m=0;
    for(int i=4;i<30;i++)
    {
        int count = 0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                count++;
        }
        if(count==0)
            arr[m++] = i;
    }
    for(int i=0;i<m;i++)
        cout<<arr[i]<<" ";
        int n = 0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i]-arr[j] == 6)
                p.push_back({arr[i],arr[j]});
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
   cout<<n;


    return 0;
}
