#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    // Special case
    if (a < b)
        return gcd(b, a);
    // Base case
    if (b == 0)
        return a;
    // Recursive step applying recursive Euclids algorithm
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
    return 0;
}