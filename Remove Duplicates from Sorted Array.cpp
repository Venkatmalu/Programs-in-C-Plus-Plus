#include<iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>arr;
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(3);
    arr.push_back(4);
    int len=arr.size();
    int max=arr[len-1];
    for(int m=0;m<len;m++)
    {
        int count1=0;
        if(arr[m]<=max && arr[m]==arr[m+1])
        {
            count1++;
            if(count1==1)
            {
              for(int i=m;i<len;i++)
              {
                for(int j=1;j<len;j++)
                {
                   if(arr[i]==arr[j])
                   {
                     arr[j]=arr[j+1];
                   }
                }
              }
            }
        }
    }
    int count=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i+1]==(arr[i]+1))
        {
            count++;
        }
    }
    int k=count;
    count+=1;
    cout<<"k = "<<count<<endl;
    vector<int>Expected_output;
    for(int i=0;i<count;i++)
    {
            Expected_output.push_back(arr[i]);
    }
    cout<<"Expected output : ";
    cout<<"[";
    for(int i=0;i<count;i++)
    {
        cout<<Expected_output[i]<<",";
    }
    cout<<"]";
    cout<<endl<<"Result array is : ";
    for(int i=0;i<count;i++)
    {
        arr[i]=Expected_output[i];
    }
    for(int i=0;i<count;i++)
    {
        cout<<arr[i]<<",";
    }
}
