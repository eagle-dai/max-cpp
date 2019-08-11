#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[101][101]={},b[101][101]={},count=0;
    float m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>b[i][j];
        }
    }
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==b[i][j])
            {
                count++;
            }
        }
    }
    double x=100.0/(n*m)*count;
//    if(x==100)
//    {
//        cout<<"100.00\n";
//        return 0;
//    }
//    cout<<setprecision(4)<<x<<"%\n";
    printf("%.2f%\n",100.0/(n*m)*count);
    return 0;
}
