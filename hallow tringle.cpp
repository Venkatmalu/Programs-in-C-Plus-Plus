#include<iostream>

using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the range : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(i+j==n+1 || i==n || j-i==n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
