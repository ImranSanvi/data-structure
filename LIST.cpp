#include<bits/stdc++.h>
using namespace std;

void print(list<int>l){
    auto u = l.begin();
    while(u != l.end()){
        cout << *u << " ";
        u++;
    }
    cout << endl;
}

//insert any position ~ 0(n)
void Insert(list<int>&l , int index , int value){
    auto it = l.begin();
    advance(it , index);
    l.insert(it , value);
}

int main(){

    list<int>l;

    //push in front(head) ~ 0(1)
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    print(l);

    //push in back(tail) ~ 0(1)
    l.push_back(50);
    l.push_back(60);
    l.push_back(70);
    print(l);

    //delete from tail ~ 0(1)
    l.pop_back();
    print(l);

    //delete from head ~ 0(1)
    l.pop_front();
    print(l);


    Insert(l ,3 , 234);//234 is a new element
    print(l);

    //delete any position ~ 0(n)
    auto i = l.begin();
    advance(i , 3);//inserting index
    l.erase(i);//234 is a new element
    print(l);

    cout << l.size() << endl;

    return 0;
}
