#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(long long a)
{
    if(a==0||a==1)
    {
        return false;
    }
    if(a==2)
    {
        return true;
    }
    if(a%2==0)
    {
        return false;
    }
    int n = ceil(sqrt(a)); 
    for(int i=3;i<=n;i+=2)
    {
        if(a%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    long long factor[101]={},x,tmp,count=1;
    //cin>>x;
    x = 1524;
    if(x<=1)
    {
        cout<<"error!";
        return 0;
    }
    tmp=x;

    while(tmp!=1)
    {
        for(int i=2;i<=tmp;i++)
        {
            if(is_prime(i)==false)
            {
                continue;
            }
            if(tmp%i==0)
            {
                tmp/=i;
                factor[count]=i;
                i=1;
                count++;
            }
        }
    }
    cout<<x<<"=";
    for(int i=1;;i++)
    {
        if(factor[i]==0)
        {
            break;
        }
        if(factor[i]!=0)
        {
            cout<<factor[i];
        }
        if(factor[i+1]!=0)
        {
            cout<<"*";
        }
    }
    return 0;
}
