#include<iostream>

using namespace std;

int main()
{
    int *pointer=NULL,input,temp,i;
    cout<<"Enter the input to determine array size : ";
    cin>>input;
    pointer=new int[input];
    for(i=0;i<input;i++)
    {
        cout<<"Enter the element : "<<i+1<<endl;
        cin>>temp;
        *(pointer+i)=temp;
    }
    for(i=0;i<input;i++)
    {
        cout<<i+1<<"element is : "<<*(pointer+i)<<endl;
    }
}
