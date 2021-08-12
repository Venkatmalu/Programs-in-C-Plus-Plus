#include<bits/stdc++.h>

using namespace std;

int fact(int n)
{
    int res;
    if(n==0)
    {
        res=1;
    }
    else
    {
        res=n*fact(n-1);
    }
    return res;
}

int main()
{
    int R,G,T;
    cin>>R>>G>>T;
    int n = R+G+T;
    int total = fact(n);
    int r_fact = fact(R);
    int g_fact = fact(G);
    int t_fact = fact(T);
    int result = total/(r_fact*g_fact*t_fact );


    cout<<result;

}
