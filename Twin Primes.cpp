#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int PrimeNumbers (long long z) {
    if (z == 1) return 0;
    else {
        for (int i = 2; i <= sqrt(z); i++) {
            if (z % i == 0) return 0;
        }
    }
    return 1;
}

long long numbers [1000000];

int main()
{
    long long n;
    int c = 0;
    cin >> n;
    for (int i = 0; i <= n; i++) numbers [i] = n + i;
    for (int i = 0; i <= n - 2; i++) {
        c += PrimeNumbers (numbers [i]);
        c += PrimeNumbers (numbers [i + 2]);
        if (c == 2) {
            cout << "YES";
            break;
        }
        c = 0;
    }
    if (c == 0) cout << "NO";
}