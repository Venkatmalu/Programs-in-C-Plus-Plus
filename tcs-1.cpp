#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the n value : ";
    cin>>n;
    vector<vector<int>> matrix(n,vector<int> (n));
    cout<<"Enter the values : "<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>matrix[i][j];
        }
    }
    cout<<"The Matrix is : "<<endl;
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int first_daignal = 0;
    int second_daignal = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            {
                first_daignal = first_daignal+matrix[i][j];
            }
                if(i+j==n-1)
                {
                    second_daignal = second_daignal+matrix[i][j];
                }
        }
    }
        cout<<"The output is : "<<abs(first_daignal-second_daignal);
}

