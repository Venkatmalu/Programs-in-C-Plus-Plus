#include<iostream>

using namespace std;

int main()
{
    int n,i,j,k,key,arr[100],lw,uw;
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
    cout<<endl;
    cout<<"Enter the lowercase : ";
    cin>>lw;
    cout<<endl<<"Enter the uppercase : ";
    cin>>uw;
    int count=0;
   if(n==0)
   {
       count=1;
   }
   else
   {
        for(i=0;i<n;i++)
    {
         if(arr[i]>=lw&&arr[i]<=uw)
        {
            count++;
        }
        for(j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])>=lw&&(arr[i]+arr[j])<=uw)
            {
                count++;
            }
                for(k=j+1;k<n;k++)
                {
                    if((arr[i]+arr[j]+arr[k])>=lw&&(arr[i]+arr[j]+arr[k])<=uw)
                    {
                        count++;
                    }
                }
        }
    }
   }
     cout<<"The output is : "<<count<<endl;
}
