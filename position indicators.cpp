#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file;
    file.open("mani.txt",ios :: in);
    if(!file.is_open())
    {
        cout<<"Error";
    }
    else
    {
        cout<<file.tellg()<<endl;
        string message;
        file.seekg(2);
       while(file.good())
       {
          getline(file,message);
          cout<<message<<endl;
       }
    }
}
