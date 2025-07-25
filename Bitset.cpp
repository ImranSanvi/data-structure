#include<bits/stdc++.h>
using namespace std;

int main(){

    //Declaration :
    bitset < 32 > b;//all are 0 in 32 bit

    bitset < 32 > b(5);
    cout << b << endl;//binary of 5 in 32 bit

    bitset < 32 > b( string("101011") );
    cout << b.to_ulong() << endl;//Binary to decimal by using String bitset

    bitset < 32 > bs;
    cout << bs.to_ulong() << endl;//0

    bs.set();
    cout << bs << endl;// all are 1

    bs.reset();
    cout << bs << endl;

    //How many 1 in this number when it is binary
    bitset < 6 > b(10);
    cout << b.count() << endl;//2

    // 1 and 0 just inter change
    b.flip();
    cout << b << endl;
    //LSB
    cout << b[0] << " " << b[1] << endl;


	return 0;
}
