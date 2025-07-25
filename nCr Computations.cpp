1. Binomial Coefficient
    int main()
    {
    
        optimize();
        int n , k;
        cin >> n >> k;
        long long dp[n+1][n+1];
    
        //Base case
        dp[0][0] = 1;
    
        for(int i=1; i<=n; i++){
            for(int j=0; j<=i; j++){
                if(j == i || j == 0){
                    dp[i][j] = 1;
                }
                else{
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-1];
                }
            }
        }
    
        cout << dp[n][k] << endl;
    
        return 0;
    }

    //using recursion
    long long binomialCoeff(int n , int k){
        // Base Cases
        if (k == 0 || k == n)
            return 1;
    
        // Recurrence relation
        return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
    }
    int main()
    {
    
        optimize();
        int n , k , p;
        cin >> n >> k;
        cout << binomialCoeff(n , k) << endl;
    
        return 0;
    }

    // optimized version 0(k)

    #include <bits/stdc++.h>
    using namespace std;

    // Returns value of Binomial Coefficient C(n, k)
    int binomialCoeff(int n, int k)
    {
        int res = 1;
        // Since C(n, k) = C(n, n-k)
        if (k > n - k)
            k = n - k;

        // [n * (n-1) *---* (n-k+1)] / [k * (k-1) *----* 1]
        for (int i = 0; i < k; ++i) {
            res *= (n - i);
            res /= (i + 1);
        }
        return res;
    }

    int main()
    {
        int n = 8, k = 2;
        cout << "Value of C(" << n << ", " << k << ") is " << binomialCoeff(n, k);
        return 0;
    }


2. C(n, r)%p = [ C(n-1, r-1)%p + C(n-1, r)%p ] % p


3. Rencontres Number (Counting partial derangements)

  D(0, 0) = 1 
  D(0, 1) = 0 
  D(n+2, 0) = (n+1) * (D(n+1, 0) + D(n, 0)) 
  D(n, k) = nCk * D(n-k, 0))


    #include <bits/stdc++.h>
    using namespace std;
    
    int binomialCoeff(int n, int k)
    {
        // Base Cases
        if (k == 0 || k == n)
            return 1;
     
        // Recurrence relation
        return binomialCoeff(n - 1, k - 1) +
               binomialCoeff(n - 1, k);
    }
     
    // Return Recontres number D(n, m)
    int RencontresNumber(int n, int m)
    {
        // base condition
        if (n == 0 && m == 0)
            return 1;
     
        // base condition
        if (n == 1 && m == 0)
            return 0;
        if (m == 0)
            return (n - 1) * (RencontresNumber(n - 1, 0) + RencontresNumber(n - 2, 0));
     
        return binomialCoeff(n, m) * RencontresNumber(n - m, 0);
    }
    
    int main()
    {
        int n = 7, m = 2;
        cout << RencontresNumber(n, m) << endl;
        return 0;
    }
