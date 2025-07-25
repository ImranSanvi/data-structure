      // In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;



int main()
{

 // Complexity __ ( log2 n )
    //SET Is Always Unique And Sorted Element :

    //SET Declare :
    set <int> s = {5,3,3,2,3};
    cout << s.size() << endl;//3
    for(auto u: s)cout << u << " ";//2 3 5
    cout << endl;


    //Find element : Complexity log2(n)
    cout << s.count(2) << endl;//1
    cout << s.count(4) << endl;// 0
    //Find First Element :
    cout << *s.begin() << endl;//2
      //Find Last Element :
      cout << *(--s.end()) << endl;//5
      cout << *s.rbegin() << endl;//5

      //Erase Element :
      s.erase(s.begin());
      cout << s.size() << endl;//2
      for(auto u: s)cout << u <<" ";//3 5
      cout << endl;

     //Specific element delete :
     int x;
     s.erase(x);


    //s.clear() = set clearing operation
    //s.empty() = set empty or not

    // set user input :
    set <int> se;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        se.insert(a);//Complexity log2(n)
    }
    for(auto u:se )cout << u << " ";
    cout << endl;

    //string of set:
    set <string> ss;
    ss.insert("shahid");
    ss.insert("imran");
    ss.insert("shahid");
    ss.insert("absar");
    ss.insert("tawhid");
    ss.insert("imran");
    cout << ss.size() << endl;
    for(auto u : ss)cout << u << " ";//absar imran shahid tawhid
    cout << endl;

    //set of pair(pair of integer):
    set<pair <int,int> >sp;
    sp.insert({2,3});
    sp.insert({4,3});
    sp.insert({4,3});
    sp.insert({2,7});
    sp.insert({4,3});
    sp.insert({5,1});
    sp.insert({5,1});
    cout << sp.size() << endl;//4
    for(auto u:sp)cout << u.first <<" " << u.second << endl;/*
    /* 2 3
       2 7
       4 3
       5 1*/

    //Decreasing order in set(integer,pair,string etc):
    set <int,greater<int> >sd;
    sd.insert(2);
    sd.insert(6);
    sd.insert(2);
    sd.insert(3);
    sd.insert(5);
    sd.insert(6);
    cout << sd.size() << endl;//4
    for(auto u : sd)cout << u << " ";//6 5 3 2
    cout << endl;

    //Unordered set:(In this set elements are unique but not sort)
    unordered_set <int>su;
    su.insert(3);
    su.insert(3);
    su.insert(1);
    su.insert(5);
    su.insert(2);
    cout << su.size() << endl;//4
    for(auto u : su)cout << u << " ";//2 5 1 3
    cout << endl;

    return 0;
}
