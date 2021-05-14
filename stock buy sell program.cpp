#include<iostream>

using namespace std;

int main()
{
    int arr[100],i,j,num,diff=0;
    cout<<"Enter the number of costs : ";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<"The costs of stocks are : ";
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    for(i=0;i<num;i++)
    {
        for(j=i;j<num;j++)
        {
            if(arr[i]<=arr[j])
            {
                int res=arr[j]-arr[i];
                if(diff<res)
                {
                    diff=res;
                }
            }
            else
            {
                break;
            }
        }
        i=j-1;
    }
    cout<<endl<<endl<<"Maximum profit is ="<<diff<<endl<<endl;
}
