#include <bits/stdc++.h>
using namespace std;

int makeSieve(int n)
{

    bool sieve[n + 1];
    memset(sieve, true, sizeof(sieve));

    sieve[0] = false;
    sieve[1] = false;

    for (int i = 2; i * i <= n; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                sieve[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 0; i <= n; i++)
    {
        if (sieve[i])
            count++;
    }
    return count;
}

int main()
{

    int n;
    cin >> n;

    int nPrimes = makeSieve(n);
    cout << nPrimes << endl;
    return 0;
}