
#include <bits/stdc++.h>
using namespace std;

int main(){
            int a[] = {43 , 21 , 25 , 42 , 57 , 59};
            int b[] = {99 , 65 , 79 , 75 , 87 , 81};
        
            int n = sizeof(a)/sizeof(a[0]);
            long long sum_x = 0 ,sum_y = 0 , sum_xy = 0;
            long long sum_sqx=0,sum_sqy=0;
        
            for(int i=0; i<n; i++){
                sum_x += a[i];
                sum_y += b[i];
                sum_xy += (a[i]*b[i]);
        
                sum_sqx += (a[i] * a[i]);
                sum_sqy += (b[i] * b[i]);
            }
        
            long long p = n * sum_xy - sum_x * sum_y;
            long long q = (n*sum_sqx - sum_x*sum_x)*(n*sum_sqy - sum_y*sum_y);
        
            double r = (double)p / (sqrt( q ) );
            cout << r << endl;
        
            return 0;
        }