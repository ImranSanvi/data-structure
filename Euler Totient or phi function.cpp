//In the name of Allah

// Euler totient or phi function:complexity( sqrt(n) /ln (sqrt(n) ) )

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

//Prime Generation
const long long mx = 1e6+123;
bool is_prime[mx];
vector<long long> prime;

void primegen ( long long n )
{
    for ( int i = 3; i <= n; i += 2 ) is_prime[i] = 1;

    int sq = sqrt ( n );
    for ( int i = 3; i <= sq; i += 2 ) {
        if ( is_prime[i] == 1 ) {
            for ( int j = i*i; j <= n; j += ( i + i ) ) {
                is_prime[j] = 0;
            }
        }
    }

is_prime[2]=1;
prime.push_back(2);
    for ( int i = 3; i <= n; i += 2 ) {
        if ( is_prime[i] == 1 ) prime.push_back ( i );
    }
}

//prime Factorization
int phi(long long n){
   long long ret = n;
    for( auto p:prime){
        if( 1ll *p*p > n || n==0 )break;

        if(n%p == 0){
        ret /= p;
        ret *= (p-1);

            while(n%p == 0){
                n /= p;
            }
        }
    }

    if(n > 1){
        ret /= n;
        ret *= (n-1);
    }
    return ret;
}

//main function
int main()
{
    optimize()

    primegen(1e6);

    long long n;
    cin >> n;

    cout << phi(n) << endl;

    return 0;
}

