#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a[101],n,m,k=0,l=0,i;
    cin>>n>>m;
    memset(a,0,sizeof(a));
    for(i=1;i<=n-1;i++)
    {
        while(k<m)
        {
            l++;
            if(l>n)
            {
                l=1;
            }
            if(!a[l])
            { 
                k++;
            }
        }
        a[l]=!a[l];
        k=0;
    }
    for(int i=1;i<=n;i++)
    {
        if(!a[i])
        {
            cout<<i;
            return 0;
        }
    }
}
