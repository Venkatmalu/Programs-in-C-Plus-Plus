#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    if(str.size()%2==0)
    {
        int count = 0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='(' || str[i]=='{' || str[i]=='[')
                count++;
            else
                count--;
        }
        if(count==0)
            cout<<"true";
        else
            cout<<"false";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}
