#include<bits/stdc++.h>

using namespace std;

int main()
{
    set<int> s = {10,20,30,40,20,10,50};
    //printing size of the set
    cout<<s.size()<<endl;
    //inserting the values
    s.insert(100);
    s.insert(10);
    cout<<s.size()<<endl;
    for(auto i=s.begin();i!= s.end();i++)
    {
        cout<<*i<<" ";
    }

    return 0;
}
