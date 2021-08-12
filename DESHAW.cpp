#include<iostream>
#include<vector>

using namespace std;

int main()
{
   int a,b,c;
   cin>>a;
   cin>>b;
   cin>>c;
   int max1 = a<b?b:a;
   int max2 = max1<c?c:max1;
   cout<<max2;
   vector<int> arr;
   int min=0;
   int res = (a%1)+(b%1)+(c%1);
   cout<<res;
   arr.push_back(1);
   for(int i=2;i<max2;i++)
   {
       if((a%i)+(b%i)+(c%i)<=res)
       {
           cout<<res;
          arr.push_back(i);
       }
   }
   cout<<endl;
   for(int i=0;i<arr.size();i++)
   {
       cout<<arr[i]<<" ";
   }
  int res1 = ((a+b+c)-3*arr[0]);
   for(int i = 1;i<arr.size();i++)
   {
      if(((a+b+c)-3*arr[i])<res1)
      {
         res1 = ((a+b+c)-3*arr[i]);
      }
   }
   cout<<endl<<res1;
}
