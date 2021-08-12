#include<bits/stdc++.h>

using namespace std;

int main()
{
    /*string word;
    cin>>word;
    string result;
    for(int i=0;i<word.size();i++)
    {
        if(i!=0&&65<=word[i]&&word[i]<=90)
        {
            result = result + " " + (char)(word[i]+32);
        }
        else
            result = result + (char)(word[i]+32);

    }
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    cout<<result;
    cout<<(char)('A'+32);*/
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    sort(arr+3,arr+5);
     for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}
