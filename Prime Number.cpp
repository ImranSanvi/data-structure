1. Left-Truncatable Prime
    long long p = 1;
    vector<int>v;
    bool is_prime(long long n){
        if(n<2)return false;
        int sq = sqrt(n);
        for(int i=2; i<=sq; i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    
    int main()
    {
        long long n;
        cin >> n;
    
        string s = to_string(n);
        for(int i=1; i<s.size(); i++){
            p *= 10;
        }
    
         int c = 0;
        while(n != 0){
            v.push_back(n);
            n = n%p;
            p /= 10;
        }
        bool b = is_prime(v[0]);
        if(!b){
            c++;
        }
        else{
            for(int i=1; i<v.size(); i++){
                int tmp = v[i] - v[i-1];
                bool p = is_prime(v[i]);
                if(tmp == 0 || p == 0){
                    c++;
                    break;
                }
            }
        }
    
        if(c == 0){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    
        return 0;
    }



2. Super Prime
    const int mx = 1e6+123;
    bool is_prime[mx];
    vector<int> prime;
    
    void primegen ( int n )
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
    
    is_prime[2]=0;
    prime.push_back(2);
    
        for ( int i = 3; i <= n; i += 2 ) {
            if ( is_prime[i] == 1 ) prime.push_back ( i );
        }
    }
    
    int main()
    {
        long long n;
        cin >> n;
        primegen(n+5);
    
        int i=0;
        while(1){
            int x = prime[i];
            if(prime[x-1] > n){
                break;
            }
            else{
                cout << prime[x-1] << " ";
                if(prime[x-1] == n)break;
                i++;
            }
        }
        return 0;
    }


3. 
