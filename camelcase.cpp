#include<iostream>

using namespace std;

int main()
{
    string str;
    int i,j,len,count=0;
    cout<<"Enter a string that follows camelcase string properties : ";
    cin>>str;
    len=str.size();
    for(i=0;i<len;i++)
    {
        if(97<=str[0]&&str[0]<=122&&i==0 || 65<=str[i]&&str[i]<=90)
        {
            count++;
        }
    }
    cout<<"The output is : "<<count;
}
