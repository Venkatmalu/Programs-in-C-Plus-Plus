#include<iostream>

using namespace std;

int main()
{
    string res;
  int n;
  cin>>n;
  while(n)
  {
      cout<<n<<endl;
      int temp = (n-1)%26;
      char c = 'A'+temp;
      res = c+res;
      cout<<temp<<endl;
      n=(n-1)/26;
  }
  cout<<res;
}
