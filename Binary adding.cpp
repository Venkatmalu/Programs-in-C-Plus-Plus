#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>

using namespace std;

string addBinary(string a, string b) {
        int a_len = a.length();
        int b_len = b.length();
        string res="";
        int result,carry=0;
        int i=a_len-1;
        int j=b_len-1;
        while(a_len>0 || b_len>0)
        {
            cout<<" a_len="<<a_len<<" b_len="<<b_len<<" i="<<i<<" j="<<j<<endl;
            if(a_len==0)
            {
                if(b[j]=='1')
                {
                    if(carry==1)
                    {
                        res=res+"1";
                        carry=1;
                    }
                    else
                    {
                        res=res+"1";
                        carry=0;
                    }
                }
                else
                {
                    if(carry==1)
                    {
                        res=res+"1";
                        carry=0;
                    }
                    else
                    {
                        res=res+"0";
                        carry=0;
                    }
                }
                b_len--;
                j--;
            }
            else if(b_len==0)
            {
                if(a[i]=='1')
                {
                    if(carry==1)
                    {
                        res=res+"0";
                        carry=1;
                    }
                    else
                    {
                        res=res+"1";
                        carry=0;
                    }
                }
                else
                {
                    if(carry==1)
                    {
                        res=res+"1";
                        carry=0;
                    }
                    else
                    {
                        res=res+"0";
                        carry=0;
                    }
                }
                a_len--;
                i--;
            }
            else if(a[i]=='1' && b[j]=='1')
            {
                result=10;
                if(carry==1)
                {
                    res=res+"1";
                    carry=1;
                }
                else
                {
                    res=res+"0";
                    carry=1;
                }
                a_len--;
                b_len--;
                i--;
                j--;
            }
            else if(a[i]=='0' && b[j]=='1')
            {
                result=1;
                if(carry==1)
                {
                    res=res+"0";
                    carry=1;
                }
                else
                {
                    res=res+"1";
                    carry=0;
                }
                a_len--;
                b_len--;
                i--;
                j--;
            }
            else if(a[i]=='1' && b[j]=='0')
            {
                result=1;
                if(carry==1)
                {
                    res=res+"0";
                    carry=1;
                }
                else
                {
                    res=res+"1";
                    carry=0;
                }
                a_len--;
                b_len--;
                i--;
                j--;
            }
            else
            {
                result=0;
                if(carry==1)
                {
                    res=res+"1";
                    carry=0;
                }
                else
                {
                    res=res+"0";
                    carry=0;
                }
                a_len--;
                b_len--;
                i--;
                j--;
            }
        }
        if(carry==1)
        {
            res=res+'1';
        }
        reverse(res.begin(),res.end());
        return res;
    }

int main()
{
    string a,b;
    cout<<"Enter string a : ";
    cin>>a;
    cout<<"Enter string b : ";
    cin>>b;
    string res=addBinary(a,b);
     cout<<endl<<"Result is : "<<res;
}
