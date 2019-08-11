#include<iostream>

using namespace std;

int main()
{
    bool a[11] = {};
    int add = 0;
    for (int i = 0; i < _countof(a); i++) {
        a[i] = true;
    }

    for (int i = 1; i <= 1000; add++)
    {
        int tmp = i % 10;
        a[tmp] = false;
        i += add;
    }

    for (int i = 1; i <= 10; i++)
    {
        if (a[i]) cout << i << " ";
    }

    return 0;
}
