#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
  vector<int> arr;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      arr.push_back(x);
  }
  sort(arr.begin(),arr.end());
  cout<<arr[k];
}
