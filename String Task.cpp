       // In The Name Of Allah

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{

    string s1,s2,s3;
    // String Input With Space In CPP
    getline(cin , s1);

    // Character Wise Output
    for(int i=0; i<s1.size(); i++){
        cout << s1[i] << " ";
    }
    cout << endl;

    //String Copy
    s2 = s1;
    cout << s2 << endl;

    // String Concatenation
    s3 = s1+s2;
    cout << s3 << endl;

    //Small letter to Capital Letter
    for(int i=0; i<s1.size(); i++){
        if(s[i]>=97 && s[i]<=122) s1[i] = 65 + s1[i] -97;
        cout << s1[i] << " ";//Character Wise
    }
    cout << s1 << endl;// Full string

    //capital Letter to Small letter
    for(int i=0; i<s1.size(); i++){
        if( s1[i]>=65 && s[i]<=90 ) s1[i] = 97 + s1[i] -65;
        cout << s1[i] << " ";//Character Wise
    }
    cout << s1 << endl;// Full string

    int a = 132,b;
    string s,x="345";

    //Integer To String
    s = to_string(a);
    cout << s << endl;
    s[0] = '2';//Replace
    cout << s << endl;

    //String To Integer
    b = stoi(x);
    cout << b << endl;//345
    b++;//Increasing
    cout << b << endl;//346

    string p = "My Country Is Bangladesh";
    cout << p.find("Bangladesh");//if find first size

    //Character Convert uppercase
    char q = 'i';
    q = toupper(q);
    cout << q << endl;

     //Character Convert Lowercase
    char r = 'M';
    r = tolower(r);
    cout << r << endl;

    //convert whole string into lowercase
      transform(str.begin(), str.end(), str.begin(), [](unsigned char c){
            return std::tolower(c);
      });

    return 0;
}
