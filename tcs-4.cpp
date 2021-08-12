#include<iostream>
#include<stack>

using namespace std;

int main()
{
    int A,B;
    cin>>A;
    stack<int> my_stack;
    if(A<10)
    {
        cout<<A+10;
    }
    else{
            for(int i=9;i>1;i--)
    {
        if(A%i==0)
        {
           A=A/i;
           my_stack.push(i);
           i++;
        }
    }
    if(A==1)
     {
         while(!my_stack.empty())
         {
             cout<<my_stack.top();
             my_stack.pop();
         }
     }
     else
     {
         cout<<"-1";
     }
    }
}
