#include<bits/stdc++.h>
using namespace std;


    int main()
    {
        //Binary Search: Complexity log2(n)
        //linear search complexity 0(n)
        int a[] = {1,2,3,4,5,6,7,8,10,12};
        int n=10;
        int target = 10;
        int l=0,r=n-1;
        bool done = 0;

        while(l<=r){
            int mid = (l+r)/2;
            if(a[mid] == target){
                cout << mid << endl;//Index 8
                done =1;
                break;
            }

            else if(a[mid] <target){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        if(!done)cout << "not found" << endl;

        //Binary search by using function:
        vector <int> v={1,2,3,4,5};
        cout << binary_search(v.begin(),v.end(),4) << endl;//1 (if not found output 0)

        //lower bond , upper bound:(how many elements lower and upper , where sorted)
        vector < int > v1 ={2,3,3,3,4,4,5};
        int lo= lower_bound(v1.begin(),v1.end(),3)-v1.begin();//1 lowest index
        int up= upper_bound(v1.begin(),v1.end(),3)-v1.begin();//4 highest index
        cout << lo << endl;
        cout << up << endl;

        //Fractional Bisection:
        long long int p;
        double x,y;
        cin >> p;
        x=0,y=p;
        for(int i=1; i<=100; i++){//or while(y-x >eps)
            double mid = (x+y)/2.0;
            if( (mid*mid) > p){
                y = mid;
            }
            else x = mid;
        }
        cout << floor(x) << endl;
    return 0;
}

