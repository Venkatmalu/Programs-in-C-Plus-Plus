#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

    string defangIPaddr(string address) {
        unordered_map<char,string> my_map;
        string res;
        pair<char,string> p('.',"[.]");
        my_map.insert(p);
        for(int i=0;i<address.size();i++)
        {
            if(my_map.count('.'))
            {
                res = res + my_map['.'];
            }
            else
            {
                res = res + addres[i];
            }
        }

        return res;
    }

int main()
{

}
