#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    ifstream file;

    file.open("velu.txt");

    if(!file.is_open())
    {
        cout<<"Not opened...";
    }
    else
    {
       string message;
       while(file.good())
       {
          getline(file,message);
          cout<<message<<endl;
       }
    }
}

