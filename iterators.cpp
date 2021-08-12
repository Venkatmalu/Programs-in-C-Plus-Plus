#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,6};
    for(auto it : v)
    {
        it = it+2;
        cout<<it<<" ";
    }
    cout<<endl;
    for(auto &it : v)
    {
        it++;
        cout<<it<<" ";
    }
        cout<<endl;
    for(auto it : v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    vector<pair<int,int>> v1 = {{1,2},{1,3}};
    for(auto &value : v1)
    {
        cout<<value.first<<" "<<value.second<<endl;
    }
    /*unordered_map<int,string> my_map;
    my_map[1] = "mani";
    my_map[2] = "velu";
    for(auto &it : my_map[1])
    {
        cout<<(*it.second)<<" ";
    }*/
    set<int> s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto value : s)
    {
        cout<<value<<" ";
    }


    return 0;
}
