// In The Name Of Allah

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
    //For Each Loop In String :
    //Also Character Wise Output
    string s;
    getline(cin , s);
    for(auto u:s )cout << u << " ";
    cout << endl;

    //String Reverser :
    reverse(s.begin() , s.end() );
    cout << s << endl;

    //Sub_string Output :
    string a = s.substr(2 , 5);
    cout << a << endl;

    //String Sorting : Complexity 0(n log n)
    sort(s.begin() , s.end());
    cout << s << endl;

    //string Unque :
    sort(s.begin(), s.end());
    int sz = unique(s.begin(),s.end() )- s.begin();
    cout << sz << endl;

    //s.pop_back() == Last Element Delete
    //Space Checking : isspace()
    //Lowercase Checking : islower()
    //Uppercase Checking : isupprr()
    char c = 'A';
    bool f1 = islower(c);
    cout << f1 << endl;//Output 0 cause that's uppercase
    return 0;
}
