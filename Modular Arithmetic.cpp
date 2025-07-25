//In The Name Of Allah
//Sum Of Number of Divisor :

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define MOD 1000000007
typedef long long ll;

inline void normal(ll a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

//main function : (for Multiplication)
int main()
{
    optimize()

    int n;
    cin >> n;

    long long ans = 1;
    for(int i=1; i<=n; i++){
        ans *= (i%MOD);
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}

//main function : (For Addition)
int main()
{
    optimize()

    long long n;
    cin >> n;

    long long ans = 0;
    for(long long i=1; i<=n; i++){
        ans += (i%MOD);
        ans %= MOD;
    }

    cout << ans << endl;

       return 0;
}

    //main function : (For Subtraction)
int main()
{
    optimize()

    long long a,b,r;
    cin >> a >> b;

    long long ans = 0;

    r = (a%MOD) - (b%MOD);
    if(r < 0)r += MOD;
    ans = r%MOD;

    cout << ans << endl;
    cout << modSub(a,b) << endl;
    cout << endl;

    return 0;
}

//Main Function : (For Power without function)
int main()
{
    optimize()

    long long b,p,m;
    cin >> b >> p >> m;

    long long ans = 1;

    while( p>0 ){
        if(p%2 == 1){
            ans *= b;
            ans %= m;
        }

        p = p/2;
        b *= b;
        b %= m;
    }

    cout << ans << endl;


    return 0;
}

// Power with function :Complexity log2 (power)
long long modpow(long long b , long long p){
    long long ret = 1;
    while( p>0 ){
        if( p%2 == 1){
            ret *= b;
            ret %= MOD;
        }
        p /= 2;
        b *= b;
        b %= MOD;
    }

    return ret;
}

int main()
{
    optimize();
    long long b,p;
    cin >> b >> p;

    cout << modpow(b,p) << endl;

    return 0;
}

// Division :Complexity log2 (MOD)
long long modpow(long long b , long long p){
    long long ret = 0;
    while( p>0 ){
        if( p%2 == 1){
            ret *= b;
            ret %= MOD;
        }
        p /= 2;
        b *= b;
        b %= MOD;
    }

    return ret;
}

int main()
{
    optimize();
    long long b,p;
    cin >> b >> p;

    cout << ( (b%MOD) * modPow(p,MOD-2) ) %MOD<< endl;


    return 0;
}



5. Euler’s criterion (Check if square root under modulo p exists)
    Square root of n under modulo p exists if and only if n(p-1)/2 % p = 1
    or, A Naive Method is to try every number x where x varies from 2 to p-1. For every x, check if (x * x) % p is equal to n % p. 
        bool squareRootExists(int n, int p)
        {
            n = n%p;
            for (int x=2; x<p; x++)
                if ((x*x)%p == n)
                    return true;
            return false;
        }
        
        int main()
        {
           int p = 7;
           int n = 2;
           squareRootExists(n, p)? cout << "Yes": cout << "No";
           return 0;
        }

6. Trick for modular division ( (x1 * x2 …. xn) / b ) mod (m)
        int modular_inverse(int a, int m){
            for (int x = 1; x < m; x++)
                if (((a%m) * (x%m)) % m == 1)
                    return x;
            return 0;
        }
         
        int32_t main()
        {
            // modular_inverse() is a user defined function
             int i = modular_inverse(120, 10000007);
            for (int i = 0; i < 5; i++)
                ans = (ans * (55555 - i)) % 1000000007;
             
            ans = (ans * i) % 1000000007;
            cout << "Answer using multiplicative"
                 << " modular inverse concept: " << ans;
         
            return 0;
        }
