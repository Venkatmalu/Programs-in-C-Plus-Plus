#include<iostream>
#include<vector>

using namespace std;
int m = 1;
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> res(numRows,vector<int> (m));
        int count = 0;
        for(int i=0;i<numRows;i++)
        {
            if(i==0)
            {
                res[i][i] = 1;
                count++;
                m++;
            }
            else if(i==1)
            {
                for(int j=0;j<count+1;j++)
                {
                    res[i][j] = 1;
                }
                m++;
                count++;
            }
            else
            {
                for(int j=0;j<count+1;j++)
                {
                    if(j==0)
                    {
                        res[i][j]=1;
                    }
                    else if(j==count)
                    {
                        res[i][j]= 1;
                    }
                    else
                    {
                        res[i][j] = res[i-1][j-1]+res[i-1][j];
                    }
                }
                m++;
                count++;
            }
        }
        return res;
    }

int main()
{
    int n;
    cout<<"Enter the N value : ";
    cin>>n;
    vector<vector<int>> res = generate(n);
    int p=0;
    cout<<endl<<"Output is : "<<endl;
    for(int i = 0; i < res.size(); i++)
    {
        for(int j = 0; j<=p; j++)
        {
            cout << res[i][j] << " ";
        }
        p++;
        cout << endl;
    }
}
