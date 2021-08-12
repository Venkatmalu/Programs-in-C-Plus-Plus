#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int N,M,R;
    cin>>N>>M>>R;
    vector<int> input_pipeline;
    vector<int> output_pipeline;
    int x;
    for(int i=0;i<N;i++)
    {
        cin>>x;
        input_pipeline.push_back(x);
    }
    for(int i=0;i<M;i++)
    {
        cin>>x;
        output_pipeline.push_back(x);
    }
    int input_sum = 0;
    for(int i=0;i<N;i++)
    {
        input_sum = input_sum + input_pipeline[i]-R;
    }
    int output_sum = 0;
    for(int i=0;i<M;i++)
    {
        output_sum = output_sum + output_pipeline[i]-R;
    }
    if(input_sum == output_sum)
    {
        cout<<"BALANCED";
    }
    else
    {
        if(input_sum > output_sum)
        {
            output_pipeline.push_back((input_sum-output_sum)+R);
            cout<<-((input_sum-output_sum)+R);
        }
        else
        {
            output_pipeline.push_back((output_sum-input_sum)+R);
            cout<<(output_sum-input_sum)+R;
        }
    }
    return 0;
}
