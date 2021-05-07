#include<iostream>

using namespace std;

int main()
{
    int array[]={10,20,30,40,50,60,70};

    for(int var : array)
    {
        cout << var << endl;
         var++;
    }
    return 0;
}
