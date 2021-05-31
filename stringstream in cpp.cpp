#include<iostream>
#include<sstream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter a int value to convert into string : ";
    cin>>num;
    stringstream sso;
    sso<<num;
    string converting;
    sso>>converting;
    cout<<"The Converted string is : "<<converting<<endl;
    cout<<"The combining is : "<<converting+"2"<<endl;
    stringstream ssi;
    ssi<<converting;
    int number;
    ssi>>number;
    cout<<"string to integer is  "<<number<<endl;
    cout<<"addition is : "<<number+2;

    return 0;
}
