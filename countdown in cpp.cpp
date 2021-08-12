#include<iostream>
#include<windows.h>
#define TRUE 1
using namespace std;

int main()
{
            int h=0,m=0,s=0,ms=0,arr[100];
            printf("Enter the time in MM::SS(using space):\n");
            scanf("%d%d",&m,&s);
            int i=0;
            #pragma omp parallel while
            while(1)
            {
                printf("      \r%d:%d",m,s);
                Sleep(1000);
                if(s!=0)
                {
                    s--;
                    //cin>>arr[i];
                }
                if(s==0 && m!=0)
                {
                    s=59;
                    m--;
                }
                /*if(s==0 && m==0 && h!=0)
                {
                    h--;
                    m=59;
                    s=59;
                }*/
                if(m==0 && s==0)
                {
                    printf("Time up");
                    break;
                }

                i++;
            }
    }

