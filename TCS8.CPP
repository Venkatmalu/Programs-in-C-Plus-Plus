#include<bits/stdc++.h>

using namespace std;

int main()
{
    map<char,int> m;
    m['a'] = 0;
    m['e'] = 0;
    m['i'] = 0;
    m['o'] = 0;
    m['u'] = 0;
    string word;
    getline(cin,word);
    if(word.size()==0)
       cout<<"INVALID INPUT"<<endl;
    else
    {
        transform(word.begin(),word.end(),word.begin(),::tolower);
        for(int i=0;i<word.size();i++)
        {
          if(m.count(word[i]))
          {
            m[word[i]]++;
            word.erase(word.begin()+i);
            i--;
          }
        }
    for(auto &it : m)
        cout<<it.first<<" "<<it.second<<endl;
    cout<<word;
    }
}
