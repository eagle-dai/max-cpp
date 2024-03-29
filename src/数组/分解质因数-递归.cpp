#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_prime(int a)
{
    if (a <= 1 )
    {
        return false;
    }
    else if (a == 2)
    {
        return true;
    }
    else if (a % 2 == 0)
    {
        return false;
    }
    const int n = (int)ceil(sqrt(a));
    for (int i = 3; i <= n; i += 2)
    {
        if (a%i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> factors(int n)
{
    std::vector<int> results;

    for (int i = 2; i <= n / 2; i++) {
        bool i_prime = is_prime(i);
        int k = n / i;
        if (k * i == n) {
            bool k_prime = is_prime(k);

            if (k_prime && i_prime) {
                return { i, k };
            }
            if (i_prime) {
                auto r = factors(k);
                r.push_back(i);
                return r;
            }
            if (k_prime) {
                auto r = factors(i);
                r.push_back(k);
                return r;
            }
            {
                auto r1 = factors(i);
                auto r2 = factors(k);
                r1.insert(r1.end(), r2.begin(), r2.end());
                return r1;
            }
        }
    }

    return {n};
}

int main()
{
    int n = 100;
    auto results = factors(n);

    std::sort(results.begin(), results.end());
    for (int i : results) {
        cout << i << ' ';
    }
}
