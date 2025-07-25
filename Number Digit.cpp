1. Print first k digits of 1/n where n is a positive integer
void print(int n, int k)
{
   int rem = 1; // Initialize remainder
 
   // Run a loop k times to print k digits
   for (int i = 0; i < k; i++)
   {
         // The next digit can always be obtained as
         // doing (10*rem)/10
         cout << (10 * rem) / n;
 
         // Update remainder
         rem = (10*rem) % n;
   }
}
int main()
{
    int n = 7, k = 3;
    print(n, k);
    cout << endl;
    return 0;
}


2. Find element using minimum segments in Seven Segment Display
      int main() {
      
          int digit[10] = {6 , 2, 5 , 5 , 4 , 5 , 6, 3 , 7 , 5};
          int n;
          cin >> n;
          int a[n];
          for(int i=0; i<n; i++){
              cin >> a[i];
          }
      
          int ans=a[0];
          int p = INT_MAX;
          for(int i=0; i<n; i++){
              int x = a[i];
              int segment = 0;
              while(x){
                  segment += digit[x%10];
                  x /= 10;
              }
              if(segment < p){
                  p = segment;
                  ans = a[i];
              }
          }
          cout << ans << endl;
          return 0;
      }



3. Find next greater number with same set of digits
      int main() {
      
          int n;
          cin >> n;
          vector<int>v;
          deque<int>ans;
      
          while(n){
              v.push_back(n%10);
              n /= 10;
          }
          int c = 0;
          for(int i=1; i<v.size(); i++){
              if(v[i] < v[i-1] && c==0){
                  c++;
                  ans.push_front(v[0]);
                  ans.push_back(v[i]);
                  for(int j=1; j<i; j++){
                      ans.push_back(v[j]);
                  }
              }
              else if(c == 1){
                  ans.push_front(v[i]);
              }
          }
          if(c == 0){
              cout << "Not Possible" << endl;
          }
          else{
              while(!ans.empty()){
                  cout << ans.front();
                  ans.pop_front();
              }
              cout << endl;
          }
      
          return 0;
      }



4. Check if a number is jumbled or not
      int n;
          cin >> n;
          vector<int>v;
      
          while(n){
              v.push_back(n%10);
              n /= 10;
          }
          int c = 0;
          for(int i=1; i<v.size(); i++){
              int x = abs(v[i] - v[i-1]);
              if(x > 1){
                  c++;
                  break;
              }
          }
          if(c == 0){
              cout << "True" << endl;
          }
          else{
              cout << "False" << endl;
          }
      
          return 0;
      }



5. Numbers having difference with digit sum more than s
      int digitSum(int n){
          int sum =0;
          while(n){
              sum += n%10;
              n /= 10;
          }
          return sum;
      }
      int main() {
      
          int n , s;
          cin >> n >> s;
          int ans = 0;
          for(int i=s; i<=n; i++){ //  or , i<=min(n, s + 163)
              int x = digitSum(i);
              int p = abs(i-x);
              if(p > s){
                  ans++;
              }
          }
          cout << ans << endl;
      
          return 0;
      }



6. Total numbers with no repeated digits in a range
      int repeated_digit(int n)
      {
          unordered_set<int> s;
          while(n != 0)
          {
              int d = n % 10;
              if(s.find(d) != s.end())
              {
                  return 0;
              }
              s.insert(d);
              n = n / 10;
          }
      
          return 1;
      }
      int calculate(int L,int R)
      {
          int answer = 0;
          for(int i = L; i < R + 1; ++i)
          {
              answer += repeated_digit(i);
          }
         
          return answer ;
      }
      
      int main()
      {
          int L = 1, R = 100;
          cout << calculate(L, R);
          return 0;
      }
