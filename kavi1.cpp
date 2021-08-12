#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin>>str;
    /*string s;
    cin>>s;*/
    int result = 0;
    for(int i=0;i<str.size();i++)
    {
        int sum = 0;
        while(isdigit(str[i]))
        {
            sum = sum*10+(str[i]-'0');
            i++;
        }
        result = result + sum;
    }
    cout<<result;
}
