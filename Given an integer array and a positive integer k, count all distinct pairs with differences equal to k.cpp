#include<iostream>

using namespace std;

int main()
{
   int arr[100],num,i,j,k,count=0;
   cout<<"Enter the number of elements : ";
   cin>>num;
   for(i=0;i<num;i++)
   {
       cin>>arr[i];
   }
   cout<<"The array is : ";
   for(i=0;i<num;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<endl<<"Enter the positive k value : ";
   cin>>k;
   for(i=0;i<num;i++)
   {
       for(j=0;j<num;j++)
       {
           if(arr[i]-arr[j]==k)
           {
               count++;
           }
       }
   }
   cout<<endl<<"The output is : "<<count<<endl;
}
