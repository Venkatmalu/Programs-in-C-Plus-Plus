#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++)
    {
        int x = count(arr,arr+N,arr[i]);
        if(x == 1)
        {
            cout<<arr[i];
            break;
        }

    }
}
