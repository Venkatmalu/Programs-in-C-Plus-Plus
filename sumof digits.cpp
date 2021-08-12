#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string x = to_string(n);
    int sum;
    if(x.size()==1)
        cout<<(int)(x[0]-'0');
    else
        {
           while(x.size()!=1)
           {
             sum = 0;
             for(int i=0;i<x.size();i++)
                sum = sum + (x[i]-'0');
             x = to_string(sum);
           }
        }
    cout<<sum;
}
