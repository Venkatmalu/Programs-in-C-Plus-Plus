#include<iostream>

using namespace std;

int main()
{
    int a,b,c;
    a=9;
    b=0;
   try
   {
       if(b==0)
        throw "divide by zero";
    c=a/b;
    cout<<c;
   }catch(const char *e)
   {
       cout<<endl<<"Error Occred When we "<<e<<endl;
   }

    return 0;
}
