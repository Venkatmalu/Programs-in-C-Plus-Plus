#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("mani.txt",ios :: in | ios :: out | ios :: trunc);

    if(!file.is_open())
    {
        cout<<"Not opened...";
    }
    else
    {
        cout<<"File is opened u can perform operations...";
        file.close();
    }
}
