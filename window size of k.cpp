#include<iostream>

using namespace std;

int main()
{
    int arr[100],num,k,i,j,res,m;
    cout<<"Enter the number of elements : ";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"The arrray is : ";
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl<<"Enter the window size : ";
    cin>>k;
    cout<<endl<<"The output is : ";
    for(i=0;i<num-(k-1);i++)
    {
       res=0;
       for(j=i,m=0;j<num&&m<k-1;j++,m++)
       {
              if(arr[j]<arr[j+1])
              {
                  if(res>arr[j+1])
                  {
                      res=res;
                  }
                  else
                  {
                      res=arr[j+1];
                  }
              }
              else
              {
                  if(res>arr[j])
                  {
                      res=res;
                  }
                  else
                  {
                      res=arr[j];
                  }
              }
       }
       cout<<res<<" ";
    }
    cout<<endl;
}
