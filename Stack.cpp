#include<bits/stdc++.h>
using namespace std;
int main()
{
    //LIFO(Last In First Out)

    //Declare :
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(4);
    st.push(3);

    //Top element output & Delete :
    cout << st.top() << endl;
    st.pop();

    cout << st.size() << endl;

    while (!st.empty() ){
        cout << st.top() << " ";
        st.pop();
    }

     return 0;
}
