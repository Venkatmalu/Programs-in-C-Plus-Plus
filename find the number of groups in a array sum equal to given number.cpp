#include<iostream>

using namespace std;

int main()
{
    int n,i,j,k,key,arr[100];
    cout<<"Enter the number of elements : ";
    cin>>n;
    cout<<"Enter the array : ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Enter the key value : ";
    cin>>key;
    cout<<endl;
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])%key==0)
            {
                count++;
            }
                for(k=j+1;k<n;k++)
                {
                    if((arr[i]+arr[j]+arr[k])%key==0)
                    {
                        count++;
                    }
                }
        }
    }
     cout<<"The output is : "<<count<<endl;
}
