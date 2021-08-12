#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

vector<int> remove(int arr[],int n)
{
    vector<int> output;
    unordered_map<int,bool> mapping;
    for(int i=0;i<n;i++)
    {
        if(mapping.count(arr[i])>0)
        {
            continue;
        }
        mapping[arr[i]] = true;
        output.push_back(arr[i]);
    }
    return output;
}

int main()
{
    int n,arr[100];
    cout<<"Enter the number of array elements : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    vector<int> output = remove(arr,n);
    cout<<"The output is : "<<endl;
    for(int i=0;i<output.size();i++)
    {
        cout<<output[i]<<" ";
    }
}
