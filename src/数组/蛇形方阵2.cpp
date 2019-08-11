#include<iostream>
#include<cstring>
using namespace std;

int x = 0, y = 0, n, mycount = 1, a[26][26];

void up()
{
    while (x-1 >= 0 && !a[x-1][y])
    {
//        x--;
//        mycount++;
//        a[x][y] = mycount;
        a[--x][y]=++mycount;
    }
}

void down()
{
    while (x+1 < n && !a[x+1][y])
    {
//        x++;
//        mycount++;
//        a[x][y] = mycount;
        a[++x][y]=++mycount;
    }
}

void left()
{
    while (y-1 > 0 && !a[x][y-1])
    {
//        y--;
//        mycount++;
//        a[x][y] = mycount; 
        a[x][--y]=++mycount;
    }
}

void right()
{
    while(y+1 < n && !a[x][y+1])
    {
//        y++;
//        mycount++;
//        a[x][y]=mycount;
        a[x][++y]=++mycount;
    }
}

void print_mat()
{
    for (int i=0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    n = 3;
    y = n - 1;
    memset(a,0,sizeof(a));
    a[x][y]=1;
    while(mycount < n * n)
    {
        down();
        left();
        up();
        right();
    }
    print_mat();
    
    return 0;
}
