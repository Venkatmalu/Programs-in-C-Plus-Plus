#include<iostream>

using namespace std;

int main()
{
    int no_persons,profit_nth_node,profit_percent_to_send,res;
    cin>>no_persons;
    cin>>profit_nth_node;
    cin>>profit_percent_to_send;
    for(int i=0;i<no_persons-1;i++)
    {
        res = (profit_percent_to_send*profit_nth_node)/100;
        profit_nth_node = res;
    }
    cout<<endl<<"The output is : "<<abs(res);

    return 0;
}
