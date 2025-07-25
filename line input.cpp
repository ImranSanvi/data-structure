

#include<bits/stdc++.h>
using namespace std;

const long long N = 105;
const long long M = 1e5+12;

int main(){

    int tc;
    cin >> tc;
    cin.ignore();
    while(tc--){

        int m;
        int value[25];
        int dp[205][205];

        string s;
        getline(cin, s);
        stringstream ss(s);
        int x,n=0,sum=0;
        while(ss >> x){
            n++;
            value[n] = x;
            sum += x;
        }
        if(sum %2 != 0){
           cout << "NO" << endl;
        }
        else{
            m = sum/2;

            //handle base case
            for(int i=1; i<=m; i++){
                dp[0][i] = 0;
            }
            dp[0][0] = 1;

            //loop over the state
            for(int i=1; i<=n; i++){
                for(int target=1; target<=m; target++){
                    int ans1 = dp[i-1][target];
                    if(target < value[i]){
                        dp[i][target] = ans1;
                    }
                    else{
                        int ans2 = dp[i-1][target-value[i]];
                        dp[i][target] = ans1 || ans2;;
                    }
                }
            }

            if(dp[n][m] == 1){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }

    }
    
    return 0;
}
