1. Juggler Sequence
    void jugglerSeries(int a){
        cout << a << " ";
        while(a!=1){
            if(a%2 == 0){
                a = sqrt(a);
            }
            else{
                a = a*sqrt(a);
            }
            cout << a << " ";
        }
        cout << endl;
    }
    
    int main() {
    
        int a;
        cin >> a;
        jugglerSeries(a);
    
        return 0;
    }



2. Padovan Sequence
     P(n) = P(n-2) + P(n-3)
     P(0) = P(1) = P(2) = 1
  
      int main() {
          int n;
          cin >> n;
          int p[n];
          p[0]=1;
          p[1]=1;
          p[2]=1;
          for(int i=3; i<=n; i++){
              p[i] = p[i-3]+p[i-2];
          }
          for(int i=0; i<=n; i++){
              cout << p[i] << " ";
          }
          return 0;
      }



3.Alliquot series:
    int sumOfDivisor(int n){
        int sum = 0;
        int x = sqrt(n);
        for(int i=1; i<=x; i++){
            if(n%i == 0){
                sum += i;
                if(n/i != i)sum += n/i;
            }
        }
        return sum - n;
    }
    void alliquotSeries(int n){
        cout << n << " ";
        set<int>s;
        s.insert(n);
    
        while(n>0){
            n = sumOfDivisor(n);
            if(s.count(n) != 0){
                cout << endl;
                cout << "Repeats" << endl;
                return;
            }
            else{
                cout << n << " ";
                s.insert(n);
            }
        }
    
        return;
    
    }
    int main() {
    
        int n;
        cin >> n;
        alliquotSeries(n);
        return 0;
    }


4.Moser-de Bruijn Sequence
    int gen(int n)
    {
        if (n == 0)
            return 0;
         
        else if (n == 1)
            return 1;
         
        // S(2 * n) = 4 * S(n)
        else if (n % 2 == 0)
            return 4 * gen(n / 2);
         
        // S(2 * n + 1) = 4 * S(n) + 1
        else if (n % 2 == 1)
            return 4 * gen(n / 2) + 1;
    }
     
    void moserDeBruijn(int n)
    {
        for (int i = 0; i < n; i++)
            cout << gen(i) << " ";
        cout << "\n";
    }
     
    
    int main()
    {
        int n = 15;
        cout << "First " << n << " terms of "
             << "Moser-de Bruijn Sequence : \n";
        moserDeBruijn(n);
        return 0;
    }


5.Stern-Brocot Sequence
    vector<int> BrocotSequence;
    void SternSequenceFunc(int n)
    {
        // loop to create sequence
        for (int i = 1; i<= n-2; i++)
        {
            int considered_element = BrocotSequence[i];
            int precedent = BrocotSequence[i - 1];
    
            // adding sum of considered element and it's precedent
            BrocotSequence.push_back(considered_element + precedent);
    
            // adding next considered element
            BrocotSequence.push_back(considered_element);
        }
    
        // printing sequence..
        for (int i = 0; i < 15; ++i)
            cout << BrocotSequence[i] << " ";
    }
    
    int main()
    {
        int n = 15;
        BrocotSequence.push_back(1);
        BrocotSequence.push_back(1);
    
        SternSequenceFunc(n);
    
        return 0;
    }


6. Newman-Conway Sequence
    P(n) = P(P(n - 1)) + P(n - P(n - 1))

        vector<int>v;
        void NewmanConwaySequence(int n){
        
            v.resize(n + 1);
            v[1] = 1;
            v[2] = 1;
        
            for(int i=3; i<=n; i++){
                v[i] = v[ v[i - 1] ] + v[ i - v[i - 1] ];
            }
        
            for(int i=1; i<=n; i++){
                cout << v[i] << " ";
            }
            cout << endl;
        }
        int main() {
        
            int n;
            cin >> n;
            NewmanConwaySequence(n);
            return 0;
        }



7. Sylvester’s sequence
        const long long M = 1e9+7;
        void SylvesterSequence(int n){
        
            long long a= 1;
            long ans = 2;
            for(int i=1; i<=n; i++){
                cout << ans << " ";
                ans = ( (a%M) * (ans%M) ) % M;
                a = ans;
                ans += 1;
            }
        }
        int main() {
        
            int n;
            cin >> n;
            SylvesterSequence(n);
            return 0;
        }



8. Recaman’s sequence
        vector<int>v;
        void RecamanSequence(int n){
           v.resize(n+1);
           v[0] = 0;
           for(int i=1; i<=n; i++){
                  int current = v[i-1] - i;
                  for(int j=0; j<i; j++){
                        if(v[j] == current || current<0){
                            current = v[i-1]+i;
                        }
                  }
                  v[i] = current;
           }
        
           for(auto u : v){
                cout << u << " ";
           }
           cout << endl;
        }
        int main() {
        
            int n;
            cin >> n;
            RecamanSequence(n);
            return 0;
        }
