       // In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;



int main()
{
    //Map always sorted but not unique
	//greater<int> for decending order ex :  map<int , int , greater<int> > strength;

    //Map Declaration :
    map <string , string> gender;
    gender ["imran"] = "male";
    gender ["imrose"] = "female";
    cout << gender["imran"] << " " << gender["imrose"] << endl;//male female

//check first value is already exist
if (m1.find(v[i]) == m1.end()) {//no exist
	m1[v[i]] = s[i];
}

    //User Input :
    map <string , int> id;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        int d;
        cin >> s >> d;
        id[s] = d;
    }
    for(auto u : id){
        cout << u.first << " " << u.second << endl;
    }

    //Element count :
    //Sorted (key value base)
    vector< long long > v = {1, 12345678, 1234, 12345678, 11, 3445, 1};
    map <long long ,int> cnt;
    for(int i=0; i<v.size(); i++){
        cnt [v[i]]++ ;
    }
    cout << cnt[12345678] << endl;//2
    for(auto u: cnt){
        cout << u.first <<" " << u.second << endl;
    }
    /* 1 2
    11 1
    1234 1
    3445 1
    12345678 2/*


    //Unique vale :
    map <int , int > c;
    c[1] = 1;
     c[2] = 2;
      c[3] = 1;
       c[3] = 2;
       cout << c.size() << endl;//3
    return 0;
}
