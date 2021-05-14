#include<iostream>
#include<string.h>

using namespace std;
int j=0,i,count=0;
int* fun(string str)
{
    int len;
    int* arr=new int[100];
    len=str.size();
    for(i=0;i<len;i++)
    {
        if(48<=str[i]&&str[i]<=57)
        {
            arr[j++]=str[i]-48;
            count++;
        }
        else
        {
            arr[j++]=-1;
            break;
        }
    }
   return arr;
}

int main()
{
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    int* arr=fun(str);
    int len;
    len=str.size();
    cout<<endl<<"The output is : ";
    if(count==len)
    {
        for(i=0;i<j;i++)
         {
           cout<<arr[i];
         }
    }
    else
    {
        cout<<"-1";
    }
    cout<<endl;
    return 0;
}
