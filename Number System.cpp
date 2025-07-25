1. Exponential notation of a decimal number
    int main()
    {
        double n;
        cin >> n;
    
        int c = 0;
        while(n >= 10){
            n /= 10;
            c++;
        }
    
        if(c){
            cout << n << "E" << c << endl;
        }
        else cout << n << endl;
    
        return 0;
    }


2. Check if a number is power of k using base changing method
    int main()
    {
        long long n , k;
        cin >> n >> k;
    
        bool c = 0;
        long long tmp = k;
        for(int i=2; ; i++){
            tmp *=k;
            if(tmp > n){
                break;
            }
            if(tmp == n){
                cout << "YES : " << i << endl;
                c = 1;
                break;
            }
        }
    
        if(c == 0){
            cout << "NO" << endl;
        }
    
        return 0;
    }


3. Convert a binary number to hexadecimal number
    deque<char>dq;
    vector<char>v = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    int main()
    {
        string s;
        cin >> s;
        int sz = s.size();
    
        int t=-1;
        bool point = 0;
        for(int i=0; i<sz; i++){
            if(s[i] == '.'){
                t = i;
                point = 1;
                break;
            }
        }
        if(t == -1){
            t = s.size();
        }
    
        int c = 0;
        int r = 0;
    
        for(int i=t-1; i>=0; i--){
            c++;
            if(s[i] == '1'){
                r += pow(2 , c-1);
            }
            if(c == 4 || i==0){
                dq.push_front(v[r-1]);
                c = 0;
                r = 0;
            }
        }
    
        c = 0;
        r=0;
        if(point){
            dq.push_back('.');
            for(int i=t+1; i<sz; i++){
                c++;
                if(s[i] == '1'){
                    r += pow(2 , 4-c);
                }
                if(c == 4 || i==sz-1){
                    dq.push_back(v[r-1]);
                    //cout << c << " " << r << " " << i << endl;
                    c = 0;
                    r = 0;
                }
            }
    
        }
    
        while(!dq.empty()){
            cout << dq.front();
            dq.pop_front();
        }
    
        return 0;
    }



4. Program for decimal to hexadecimal conversion
    deque<char>dq;
    vector<char>v = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    int main()
    {
        long long n;
        cin >> n;
    
        while(n>15){
            int x = n%16;
            dq.push_front(v[x-1]);
            n /= 16;
        }
        dq.push_front(v[n-1]);
    
        while(!dq.empty()){
            cout << dq.front();
            dq.pop_front();
        }
    
        return 0;
    }



5. Converting a Real Number (between 0 and 1) to Binary String
string toBinary(double n){
    string ans;
    if(n>=1 || n<=0){
        return "ERROR";
    }

    while(n>0){

        if(ans.length()>32){
            return "ERROR";
        }
        n *= 2;
        if(n>=1){
            ans.append("1");
            n -= 1;
        }
        else{
            ans.append("0");
        }
    }
    return ans;
}

int main()
{
    double n;
    cin >> n;
    string s = toBinary(n);
    if(s == "ERROR"){
        cout << s << endl;
    }
    else cout << "0." << s << endl;
    return 0;
}


6. Decimal to binary conversion without using arithmetic operators
string decToBin(int n)
{
    if (n == 0)
        return "0";
    string bin = "";   
    while (n > 0)   
    {
        bin = ((n & 1) == 0 ? '0' : '1') + bin;
         
        // right shift 'n' by 1
        n >>= 1;
    }
    return bin;
}

int main()
{
    int n = 38;
    cout << decToBin(n);
    return 0;
}
