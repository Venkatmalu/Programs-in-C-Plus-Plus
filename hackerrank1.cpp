#include<iostream>

using namespace std;


int main() {
    long int n,i,j;
    long int arr[100][100],b,a;
    long int choose;
    cin>>a;
    cin>>b;
    for(i=0;i<a;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    while(b)
    {
        long int i1,j1;
        cin>>i1;
        cin>>j1;
        cout<<arr[i1][j1]<<endl;
       b--;
    }
    return 0;
}

