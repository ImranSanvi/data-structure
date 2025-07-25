      // In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;



int main()
{
    //Multi set is is sorted but not unique:(log2 n )

    //Multi set Declare:
    multiset<int>s;
    s.insert(1);
    s.insert(3);
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    cout << s.size() << endl;//6
    for(auto u:s)cout << u << " ";//1 1 2 3 3 5
    cout << endl;

    //Find element(how many times):
    cout << s.count(3) << endl;//2
    //Erase element(all elements are erase):
    s.erase(3);
    cout << s.size()<<endl;//4
    for(auto u : s)cout << u << " ";//1 1 2 5;
    cout << endl;
    //Erase element (1 time):
    auto it = s.find(1);
    s.erase(it);
    for(auto u:s)cout << u <<" ";//1 2 5
    cout << endl;

    //User Input:
    set <int> su;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        su.insert(a);
    }

//decending order
multiset<long long, greater<long long>> s;


    return 0;
}
