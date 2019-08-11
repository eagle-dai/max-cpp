#include <iostream>

using namespace std;

int main()
{
    int n, a[11][11], x = 1;
    cin >> n;

    for (int i=1;;i--)
    {
        for (int j = (n+1) / 2;;j++)
        {
            if (x == n*n + 1) break;
            if (i==0) i += n;
            if (j==n+1) j -= n;
            a[i][j] = x;
            x++;
        }
    }
    
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
 
    return 0;
}
