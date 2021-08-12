#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

int main()
{
    unordered_map<int,string> my_map;
    //insert
    pair<int,string> p(1,"mani");
    my_map.insert(p);
    my_map[2] = "Raju";

    //access
    cout<<my_map[1]<<endl;
    cout<<my_map.at(2)<<endl;

    //print the size of the map...
    cout<<my_map.size();

    //here when we accessing not present key value then there are two problems
    //one is :
    //(**important**)cout<<my_map.at(3)<<endl;//here when we using at() function then the program will be trashed....
    //Another one is :
    cout<<my_map[3]<<endl;//here when we using [] brackets here automatically a key and a value is generated...

    //so,above are the problems to found an element in the list,the alternate solution is :
    if(my_map.count(1))
    {
        cout<<"Present"<<" "<<my_map.at(1)<<endl;
    }
    cout<<my_map.size();

    //delete an element :
    my_map.erase(1);
    if(my_map.count(1))
        cout<<"Present"<<" "<<my_map.at(1);
    else
        cout<<"Not present"<<endl;
    cout<<my_map.size();
}
