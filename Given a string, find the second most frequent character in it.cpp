#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    string str;
    char res[100];
    int i,len,count,coun[100],j,m=0,rescount=0;
    cout<<"Enter the string : ";
    cin>>str;
    len=str.size();
    for(i=0;i<len;i++)
    {
        count=0;
        for(j=0;j<len;j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        coun[m++]=count;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(coun[i]>coun[j])
               {
                   int temp1=coun[i];
                       coun[i]=coun[j];
                       coun[j]=temp1;
                        char temp=str[i];
                        str[i]=str[j];
                        str[j]=temp;
               }
        }
    }
    cout<<endl<<"he second most frequent character is : "<<str[0+(coun[0])]<<endl;
}
