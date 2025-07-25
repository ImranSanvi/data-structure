//In the name of ALLAH
//prime factorization :complexity (sqrt(n)/ln( sqrt(n) ) ) + log2(n)
//Means : Multiple of prime number

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

vector <long long> factorization (long long n){
    vector <long long > ret;
    for( auto p:prime){
        if( p*p > n)break;
        if(n%p == 0){
            while(n%p == 0){
                ret.push_back(p);
                n = n/p;
            }
        }
    }

    if(n > 1)ret.push_back(n);
    return ret;
}

//main function
int main()
{
    optimize()

    primegen(1e6);

    int n;
    cin >> n;

    vector<long long> ans = factorization(n);

    for(auto u : ans )cout << u << " ";100 = 5 5 4
    cout << endl;


    return 0;
}
