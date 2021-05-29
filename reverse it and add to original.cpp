#include<iostream>

using namespace std;

int palin(int x)
{
    int sum1=0,temp1;
    while(x>0)
    {
       temp1=x%10;
       sum1=sum1*10+temp1;
       x=x/10;
    }
    return sum1;
}

int main()
{
    int num,i,temp,res[50],m=0,result,palindrome;
    cout<<"Enter the number : ";
    cin>>num;
    int j=0;
    while(j!=5)
    {
            temp=num;
            while(num>9)
            {
              res[m++]=num%10;
              num=num/10;
            }
            res[m++]=num;
            num=temp;
            int sum=0;
            for(i=0;i<m;i++)
            {
              sum=sum*10+res[i];
            }
            result=num+sum;
            palindrome=palin(result);
            if(result==palindrome)
            {
              cout<<endl<<"The output is : "<<palindrome<<" is a palindrome"<<endl;
              break;
            }
            else
            {
              num=result;
              m=0;
            }
            j++;
    }

}
