// In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;

const int mx = 1e6+123;
vector<int> divisor [mx];

int main(){

    //Number of divisor(1 to n):
    //Harmonic Series: complexity n ln(n)

    int n;
    cin >> n;//5

    for(int i=1; i<=n; i++){
       for(int j=i; j<=n; j +=i){
          divisor[j].push_back(i);
       }
    }

    for(int i=1; i<=n; i++){
            cout << i << " : ";
       for(auto u : divisor[i]) cout << u << " ";
       cout << endl;
    }
 /*1 : 1
   2 : 1 2
   3 : 1 3
   4 : 1 2 4
   5 : 1 5*/

 return 0;
}
