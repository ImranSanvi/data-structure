// a = m2 - n2
//        b = 2 * m * n
//        c  = m2 + n2
// because,
//        a2 = m4 + n4 – 2 * m2 * n2
//        b2 = 4 * m2 * n2
//        c2 = m4 + n4 + 2* m2 * n2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int limit;
    cin>>limit;
    int a, b, c = 0; 
    int p = 2;
    while (c < limit) {
        for (int q = 1; q < p; ++q) {
            a = p * p - q * q;
            b = 2 * p * q;
            c = p * p + q * q;
            if (c > limit)
                break;
    
            printf("%d %d %d\n", a, b, c);
        }
        p++;
    }
    return 0;
}