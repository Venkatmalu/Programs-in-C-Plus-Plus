#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char ip[20];
    int len,c=0,i,start,last;
    cout<<"Enter the ip address : ";
    cin>>ip;
    len=strlen(ip);
    if(len<=15)
    {
        for(i=0;i<=len;i++)
        {
            if(ip[i]==46 || ip[i]=='\0')
            {
                last=i;
                while(last>start)
                {
                  if((last-1)==start)
                  {
                      if(start==last || start+1==last || start==last-1)
                      {
                          if(48<=ip[start]&&ip[start]<=53)
                           {
                             c++;
                            }
                      }
                      else
                      {
                          if(48<=ip[start]&&ip[start]<=50)
                           {
                              c++;
                           }
                      }
                  }
                  else
                  {
                      if(48<=ip[last-1]&&ip[last-1]<=53)
                      {
                          c++;
                      }
                  }
                  last--;
                 }
                start=i+1;
            }
        }
        if((len-3)==c)
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }
    else
    {
        cout<<0;
    }

}

