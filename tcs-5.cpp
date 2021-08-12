#include<iostream>
#include<string>

using namespace std;

int main()
{
    string sample;
    cin>>sample;
    int i=0;
    int count = 0;
    int digit = 0;
    if(sample.size()<=100)
    {
        while(sample[i]>=48&&sample[i]<=57)
        {
            digit = digit*10 + sample[i]-48;
            count++;
            i++;
        }
    }m
    if(sample.size()-count == digit)
        cout<<"True "<<digit;
    else
        cout<<"False "<<sample.size()-count;

    return 0;
}
