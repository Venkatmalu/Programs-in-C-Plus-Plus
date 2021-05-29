#include<iostream>

using namespace std;

int main()
{
    string data;
    getline(cin,data);
    cout<<data<<endl;
    for(int i=0;i<data.size();i++)
    {
        cout<<data[i]<<"-";
    }

    return 0;
}
