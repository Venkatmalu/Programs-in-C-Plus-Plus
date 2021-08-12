#include<iostream>

using namespace std;

int main()
{
   int k,row,i,j;
   cout<<"Enter k value : ";
   cin>>k;
   cout<<"Enter the number of rows : ";
   cin>>row;
   if(k%row==0)
   {
     for(i=0;i<row;i++)
     {
       for(j=0;j<k/row;j++)
       {
           cout<<"*";
       }
       cout<<endl;
     }
   }
   else
   {
       for(i=0;i<row;i++)
       {
           for(j=0;j< ;j++)
           {
               cout<<"*";
           }
       }
   }
}
