       // In The Name Of Allah

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    //Vector Declare :
    vector <int> a;
    a.push_back(2);
    a.push_back(3);
    cout << a[0] << " " << a[1] <<endl;//2 3*/

    //Vector Input :
    int n;
    cin >> n;
    vector<int>v;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        v.push_back(a);
    }

    cout << v.size() << endl;//size Of Vector

    for(int i=0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << endl;

    //v/.empty()  == empty or not check

    //v.resize() == Increasing Vector Size

    //v.begin() == 0 Number Index

    //v.end() , v.back() == last Number Index

    //For Each Loop :
    for(auto u:v){
        cout << u << " ";
    }
    cout << endl;

    // Complexity Of Sort : 0( n log2(n) )
    sort(v.begin(),v.end()); //Small To Greater
    sort(v.rbegin(),v.rend()); //Greater To small

    // Reverse the vector 0(N)
    reverse(v.begin(), v.end());

    //Unique Vector :
    sort(v.begin() , v.end());
    int sz = unique( v.begin(),v.end()) - v.begin();

    // Index Of Maximum Or Minimum Element :
    int p = max_element(v.begin(),v.end() ) - v.begin();
    int q = min_element(v.begin(),v.end() ) - v.begin();

    cout << p << " " << q << endl;


    //Frequency Count of givenb number :
      int c = count(v.begin() , v.end() , x);
       cout << c << endl;

    return 0;
}
