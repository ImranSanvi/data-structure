//In The Name Of Allah
//Sum Of Number of Divisor :
//Complexity : 0( sqrt(n) )
//Total number of divisor : pow( n, 1/3 ) 

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

//create function
int SNOD(int n){
    int sq = sqrt(n);
    int ret = 0;

    for(int i=1; i<=sq; i++){
        ret += (n/i)-i;
    }

    ret *= 2;
    ret += sq;

    return ret;
}

//main function
int main()
{
    optimize()

    int n;
    cin >> n;

    cout << SNOD(n) << endl;

    return 0;
}
