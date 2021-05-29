#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    fstream file;

    file.open("velu.txt",ios :: in | ios :: out | ios :: app);

    if(!file.is_open())
    {
        cout<<"Not opened...";
    }
    else
    {
        cout<<"opened successfully"<<endl;
        file<<endl<<"Vanakkam chennai"<<endl;
        file<<endl<<"Vaazhka Tamil";
        cout<<"successfully written..."<<endl;
         cout<<"reading......."<<endl;
        file.seekg(0);
        string message;
        while(file.good())
        {
          getline(file,message);
          cout<<message<<endl;
        }
         file.close();
    }
}

