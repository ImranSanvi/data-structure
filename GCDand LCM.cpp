1.LCM of array elements :
  int LCM(int a , int b){
      int lcm = (a*b) / __gcd(a , b);
      return lcm;
  }
  
  int main(){
  
      int a[5] = {2 , 6 ,5 ,10 , 6};
      int ans = a[0];
  
      for(int i=1; i<5; i++){
          ans = LCM(ans , a[i]);
      }
      cout << ans << endl;


2.GCD of an array elements :
  int main(){
  
      int a[5] = {2 , 4 , 6 ,8 ,16};
      int ans = a[0];
      for(int i=1; i<5; i++){
          ans = __gcd(ans , a[i]);
      }
      cout << ans << endl;
  
      return 0;
  }


3.Eucledian algoritm:
  int a, b,ans = 0;
      cin >> a >> b;
      a = max(a , b);
      b = min(a , b);
      int q=0,r=b;
      while(r != 0){
          q = a / b;
          r = a%b;
          a = b;
          b = r;
      }
      cout << a << endl;
      cout << __gcd(a , b) << endl;


4.GCD(LCM (x, y), LCM (x, z)) = LCM(x, GCD(y, z))


5.
int CountPairs(int n)
{
	// initialize k
	int k = n;
	// loop till imin <= n
	int imin = 1;
	// Initialize result
	int ans = 0;

	while (imin <= n) {

		// max i with given k floor(n/k)
		int imax = n / k;

		// adding k*(number of i with
		// floor(n/i) = k to ans
		ans += k * (imax - imin + 1);

		// set imin = imax + 1 and k = n/imin
		imin = imax + 1;
		k = n / imin;
	}

	return ans;
}
int main()
{
	cout << CountPairs(3) << endl;
}


6. CPP code for finding the GCD of two floating numbers.
#include <bits/stdc++.h>
using namespace std;
double gcd(double a, double b)
{
	if (a < b)
		return gcd(b, a);

	// base case
	if (fabs(b) < 0.001)
		return a;

	else
		return (gcd(b, a - floor(a / b) * b));
}
int main()
{
	double a = 1.20, b = 22.5;
	cout << gcd(a, b);
	return 0;
}


7. Largest Subset with GCD 1
  #include <iostream>
  using namespace std;
  
  // Function to return gcd of a and b
  int gcd(int a, int b)
  {
  	if (a == 0)
  		return b;
  	return gcd(b%a, a);
  }
  
  // Function to find largest subset with GCD 1
  int largestGCD1Subset(int A[], int n)
  {
  	// finding gcd of whole array
  	int currentGCD = A[0];
  	for (int i=1; i<n; i++)
  	{
  		currentGCD = gcd(currentGCD, A[i]);
  
  		// If current GCD becomes 1 at any moment,
  		// then whole array has GCD 1.
  		if (currentGCD == 1)
  			return n;
  	}
  
  	return 0;
  }
  
  int main()
  {
  	int A[] = {2, 4, 3};
  	int n = sizeof(A)/sizeof(A[0]);
  	cout << largestGCD1Subset(A, n);
  	return 0;
  }

    // GCD : Greatest Common Divisor
    //  cout << __gcd(a , b) << endl;//12

    // LCM : Least Common Divisor
    //  int lcm = (a* (b/__gcd(a,b) ) );
    //  cout << lcm << endl;//24


