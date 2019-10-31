// If we want to do a^p we first convert the p in its binary form 
// then write a^p = a^p1 * a^p2 * a^p3 ... where p1 + p2 + p3 ... = p ... and all of those are distinct power of twos.
// now we can find this in logp
#include <bits/stdc++.h>

using namespace std;

int modular_exponentiation(int a, int p, int n) /// a^p (mod n)
{
    int solution = 1;

    while (p)
    {
        if (p & 1)
            solution = (1LL * solution * a) % n;

        a = (1LL * a * a) % n;
        p >>= 1;
    }

    return solution;
}

int main()
{
    return 0;
}
