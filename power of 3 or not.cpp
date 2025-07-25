#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a , b;
    cin >> a >> b;

    // computing power
    double p = log10(b) / log10(a);
    // checking to see if power is an integer or not
    if (p - (int)p == 0) {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
