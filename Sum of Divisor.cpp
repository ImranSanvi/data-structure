//In The Name Of Allah
//Sum Of Divisor :(using prime factorization)

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

long long SOD(long long n){
  long long ret = 1;
    for( auto p:prime){
        if( p*p > n)break;

        if(n%p == 0){
         long long currentSum = 1;
         long long powP = 1;

            while(n%p == 0){
                powP *= p;
                currentSum += powP;
                n = n/p;
            }
            ret *= currentSum;
        }
    }

    if(n > 1){
        ret *= (1 + n);
    }

    return ret;
}

//main function
int main()
{
    optimize()

    primegen(1e6);

    int n;
    cin >> n;

    cout << SOD(n) << endl;


    return 0;
}
