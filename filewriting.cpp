#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("mani.txt",ios :: out);

    if(!file.is_open())
    {
        cout<<"Not opened...";
    }
    else
    {
        file<<"File is opened u can perform operations raju..."<<endl;
        file<<"i am a programmer in c";
        file.close();
        cout<<"successfully written...";
    }
}
