 #include<bits/stdc++.h>
 using namespace std;
 
 void printPoly(int poly[], int n)
    {
        for (int i=0; i<n; i++)
        {
           cout << poly[i];
           if (i != 0)
            cout << "x^" << i ;
           if (i != n-1)
           cout << " + ";
        }
    }
    
    int main()
    {
        int a[] = {5 , 0, 10 , 6};
        int b[] = {1 , 2, 4};
    
        int n = sizeof(a) / sizeof(a[0]);
        int m = sizeof(b) / sizeof(b[0]);
        int c[n+m] = {0};
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                c[i+j] += (a[i] * b[j]);
            }
        }
    
        for(int i=0; i<(n+m-1); i++){
            cout << c[i] << " ";
        }
        cout << endl;
        printPoly(c , m+n-1);
        return 0;
    }