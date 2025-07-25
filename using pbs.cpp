// In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;

typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update > ordered_set;

int main(){

//input number:
ordered_set pbs;
pbs.insert(1);
pbs.insert(3);
pbs.insert(3);
pbs.insert(2);
cout <<pbs.size() << endl;//4
for(auto u : pbs)cout << u << " ";//1` 2 3 3
cout << endl;

/// cout<<X.order_of_key(-5)<<endl;  // number of items in a set that are strictly smaller than our item
ordered_set pbs;
pbs.insert(1);
pbs.insert(3);
pbs.insert(3);
pbs.insert(2);
pbs.insert(7);
cout << pbs.order_of_key(6) << endl;//4

/// cout<<*X.find_by_order(1)<<endl; // iterator to the k-th largest element
ordered_set pbs;
pbs.insert(1);
pbs.insert(3);
pbs.insert(3);
pbs.insert(2);
pbs.insert(7);
cout << *pbs.find_by_order(4) << endl;//7

//Lower bound , Upper bound(upper is to lower,lower is to upper)
ordered_set pbs;
pbs.insert(1);
pbs.insert(2);
pbs.insert(3);
pbs.insert(4);
pbs.insert(5);
pbs.insert(6);
cout << *pbs.lower_bound(3) << endl;//4
cout << *pbs.upper_bound(3) << endl;//3

//basic rule:
ordered_set pbs;

///Insert a number
pbs.insert(2);
///delete a given number
pbs.erase(2);
///chek is the list is empty
if(pbs.empty());
///cout of given number
pbs.count(2);
///deletye all the number
pbs.clear();
///how many distinct number
pbs.size();
///what is smallest number
*pbs.begin();
///what is greatest number
*pbs.rbegin();
///find number
if(pbs.find());
///how many numbers are smaller
pbs.order_of_key(4);
///delete k-th smallest number
pbs.erase( pbs.find_by_order(4));
///print number in ascending order
for(int i=pbs.begin(); i!=pbs.end(), i++)
    
return 0;
}
