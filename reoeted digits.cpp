#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N1,N2;
    cin>>N1>>N2;
    //11 to 100
    int count = 0;
    for(int i=N1;i<=N2;i++)
    {
       int num = i;
       string s = to_string(num);
       set<char> unique(s.begin(),s.end());
       if(s.size() == unique.size())
        count++;
    }
    cout<<count;
}
