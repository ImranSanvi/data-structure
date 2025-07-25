#include <iostream>
using namespace std;

main() {

   int a,b;
   cin >> a >> b;

   int c = a&b;
   cout << "The output of the Bitwise AND operator is: " << c << endl ;

   int d = a|b;
   cout << "The output of the Bitwise OR operator is: " << d << endl ;

   int e = a^b;
   cout << "The output of the Bitwise Exclusive OR operator is: " << e << endl ;

   int f = ~a;
   cout << "The output of the Bitwise Exclusive Negation operator is: " << f << endl ;

   int g = a << 2;
   cout << "The output of the Bitwise Left Shift operator is: " << g << endl ;

   int h = a >> 2;
   cout << "The output of the Bitwise Right shift operator is: " << h << endl ;

   return 0;
}
