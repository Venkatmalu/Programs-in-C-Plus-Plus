#include <bits/stdc++.h>

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
    sort(arr,arr+n);
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=i+1)
        {
            cout<<i+1;
            break;
        }
       /*if(i==n-1)
       {
        if(arr[i-1]+1==arr[i])
            continue;
        else
        {
            cout<<arr[i-1]+1;
            break;
        }
       }
       else
       {
        if(arr[i]-1==arr[i-1])
            continue;
        else
        {
            cout<<arr[i]-1;
            break;
        }
       }*/
    }

    return 0;
}
