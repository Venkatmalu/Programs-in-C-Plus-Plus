#include<iostream>
#include<string.h>
#include<vector>
#include <algorithm>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<char,int> my_map;
    int n;
    cout<<"Enter the n value : ";
    cin>>n;

    string str;
    getline(cin,str);
    string matchinfo;
    vector<char> res;
    for(int i=0;i<n;i++)
    {
       getline(cin,matchinfo);
       if(!my_map.count(matchinfo[0]))
       {
          my_map[matchinfo[0]] = 0;
          res.push_back(matchinfo[0]);
       }
       if(!my_map.count(matchinfo[2]))
       {
          my_map[matchinfo[2]] = 0;
          res.push_back(matchinfo[2]);
       }
       int j = 4;
       string home_score = "";
       string away_score = "";
       while(matchinfo[j]!= '-')
       {
           home_score = home_score + matchinfo[j];
           j++;
       }
       j++;
       while(j<matchinfo.size())
       {
           away_score = away_score + matchinfo[j];
           j++;
       }
       int x = stoi(home_score);
       int y = stoi(away_score);
       if(x>y)
       {
           my_map[matchinfo[0]] += 3;
           my_map[matchinfo[2]] += 0;
       }
       else if(x<y)
       {
           my_map[matchinfo[2]] += 3;
           my_map[matchinfo[0]] += 0;
       }
       else
       {
           my_map[matchinfo[0]] += 1;
           my_map[matchinfo[2]] += 1;
       }
    }
    int maxv;
    int index = -1;
    for(int i=0;i<3;i++)
    {
        if(my_map[res[i]]>maxv)
        {
            maxv = my_map[res[i]];
            index = i;
        }
    }
    cout<<res[index]<<" "<<maxv;
    return 0;
}
