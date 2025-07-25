// In The Name Of Allah

#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{

    //Sub string find
    string s1 = "(())()";
    string s = "(()";

    if(s1.find(s) != string::npos){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }


    //Sub String Erase : Complexity 0(n)
    string s = "imrsanvian";
    s.erase(3 , 4);//Position , Length
    or ,  s.erase(s.begin()+3 ,s.begin()+8);
    cout << s << endl;

    //Add Substring
    string p="imran";
    string q = "aaaa mohammed ";
    s.insert(4 ,"aaaa");//Position , New_string
    or , copy(q.begin()+5, q.begin()+14 , back_inserter(p));
    cout << p << endl;


    // Output Substring :
   string s,s1;
   getline(cin , s);
   s1 = s.substr(3 , 6);//Position , Length
   cout << s1 << endl;


   // String Replacement :
   string s,s1;
   getline(cin , s);
   s.replace(3 , 4 , "abcd");//Position , Length
   cout << s << endl;


    //Specific Character Remove
    string a = "cccbangcclacdescch";
    a.erase(remove(a.begin(),a.end(),'c'), a.end());
    cout << a << endl;

    //Sum Of String Digit
    string b;
    cin >> b;

    int sum =0;
    int n = stoi(b);

    while(n != 0){
        sum = sum + n%10;
        cout << n%10 << " ";//Digit Output
        n = n/10;
    }
    cout << endl;
    cout << sum << endl;//Sum Of Digit
    return 0;
}
