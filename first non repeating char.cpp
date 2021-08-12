#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        int x = count(str.begin(),str.end(),str[i]);
        if(x == 1)
        {
            cout<<str[i];
            break;
        }
    }
    return 0;
}
