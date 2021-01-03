// Count prime numbers from 1 to n
// Time Complexiety : O(n*sqrt(n))
// Space Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int j = 2; j * j <= n; j++)
    {
        if (n % j == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    cout << count << endl;
}