#include<iostream>

using namespace std;

int main()
{
    int arr[100],res[100],i,num,m=0,count,sum,result=0,j,p=0;
    cout<<"Enter the number of elements : ";
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : ";
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Enter the sum value : ";
    cin>>sum;
    for(i=0;i<num;i++)
    {
        count=0;
        for(j=i;j<num;j++)
        {
            if(j==i)
            {
                if(arr[j]<=sum)
                {
                     result=arr[j];
                     res[m++]=arr[j];
                     count++;
                }

            }
            else if(result+(arr[j])<=sum)
            {
                result=result+arr[j];
                res[m++]=arr[j];
                count++;
            }
            else
            {
                break;
            }
        }
        if(p<count)
        {
            p=count;
        }
    }
    cout<<"length is : "<<p;
}
