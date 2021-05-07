#include<iostream>

using namespace std;

int main()
{
    int n,i,j,a[10][10];
    cout<<"Enter the range : ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
   int k=0,m=0,row=n-1,col=n-1;
   while(k<=row && m<=col)
   {
       for(i=m;i<=col;i++)
       {
           cout<<a[k][i]<<" ";
       }
       k++;
       for(i=k;i<=row;i++)
       {
           cout<<a[i][col]<<" ";
       }
       col--;
       if(k<=row)
       {
           for(i=col;i>=m;i--)
           {
               cout<<a[row][i]<<" ";
           }
       }
       row--;
       if(m<=col)
       {
           for(i=row;i>=k;i--)
           {
               cout<<a[i][m]<<" ";
           }
       }
       m++;
   }
}
