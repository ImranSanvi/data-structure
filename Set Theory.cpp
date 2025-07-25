1. Power Set

      void printPowerSet(vector<char>v) {
          int n = v.size();
          int totalSubsets = pow(2, n);
      
          for (int i = 0; i < totalSubsets; i++) {
              for (int j = 0; j < n; j++) {
                  if (i & (1 << j)) {
                      cout << v[j];
                  }
              }
              cout << endl;
          }
      }
      
      int main() {
          vector<char> v = {'a' , 'b' , 'c'};
          printPowerSet(v);
      
          return 0;
      }


2. Minimize the absolute difference of sum of two subsets

      void subsetDifference(int n)
      {
      
          int s = n * (n + 1) / 2;
      
          if (n % 4 == 0) {
              cout << "First subset sum = " << s / 2;
              cout << "\nSecond subset sum = " << s / 2;
              cout << "\nDifference = " << 0;
          }
          else {
              if (n % 4 == 1 || n % 4 == 2) {
      
                  cout << "First subset sum = " << s / 2;
                  cout << "\nSecond subset sum = " << s / 2 + 1;
                  cout << "\nDifference = " << 1;
              }
      
              else
              {
                  cout << "First subset sum = " << s / 2;
                  cout << "\nSecond subset sum = " << s / 2;
                  cout << "\nDifference = " << 0;
              }
          }
      }
      
      int main()
      {
          int n = 6;
          subsetDifference(n);
          return 0;
      }


3. Sum of all subsets of a set formed by first n natural numbers

An efficient solution is based on the fact that every number from 1 to n appears exactly 2(n-1) times.
So our required sum is (1 + 2 + 3 + ..+ n) * 2(n-1).
The sum can be written as (n * (n + 1)/2) * 2(n-1)

      long long findAllsSubsetSum(int n)
      {
          return n*(n+1)/2 * pow(2 , n-1);
      }
      
      int main()
      {
          int n = 3;
          long long s = findAllsSubsetSum(n);
          cout << s <<  endl;
          return 0;
      }


4. Bell Numbers (Number of ways to Partition a Set)

      int bellNumber(int n)
      {
         int bell[n+1][n+1];
         bell[0][0] = 1;
         for (int i=1; i<=n; i++)
         {
            bell[i][0] = bell[i-1][i-1];
      
            for (int j=1; j<=i; j++)
               bell[i][j] = bell[i-1][j-1] + bell[i][j-1];
         }
         return bell[n][0];
      }
      
      int main()
      {
         for (int n=0; n<=5; n++)
            cout << "Bell Number " << n << " is "
                 << bellNumber(n) << endl;
         return 0;
      }
