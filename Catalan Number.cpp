// 1. Solution for Catalan number:
// C(n) = (2n)! / [(n + 1)! * n!]

#include <bits/stdc++.h>
using namespace std;

    int main()
    {
        int n;
        cin >> n;
        int catalan[n+1];
        catalan[0] = 1;
        catalan[1] = 1;
        for(int i=2; i<=n; i++){
            long long res = 0;
            for(int j=0; j<i; j++){
                res += catalan[j] * catalan[i-j-1];
            }
            catalan[i] = res;
        }
        for(int i=0; i<=n; i++){
            cout << catalan[i] << " ";
        }
        cout << endl;
    
        return 0;
    }

// 2. Finding nth catalan number
    int countDyckPaths(unsigned int n)
    {
        int res = 1;
        for (int i = 0; i < n; ++i)
        {
            res *= (2 * n - i);
            res /= (i + 1);
        }
        return res / (n+1);
    }
