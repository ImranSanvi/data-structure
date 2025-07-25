#include<bits/stdc++.h>
using namespace std;

struct point{
    int num;
    char ch;
    string name;
};
int main(){
    
    struct point p;
    p.num = 10;
    p.ch = 'w';
    p.name = "Imran";
    cout << p.num << " " << p.ch << " " << p.name << endl;

    struct point q = {100, 'd', "Mohammed"};
    cout << q.num << " " << q.ch << " " << q.name << endl;

    int x;
    char y;
    string z;
    cin >> x >> y >> z;
    struct point r = {x, y , z};
    cout << r.num << " " << r.ch << " " << r.name << endl;

    struct point a[5];
    for(int i=0; i<5; i++){
        cin >> a[i].num >> a[i].ch >> a[i].name;
    }

    for(int i=0; i<5; i++){
        cout << a[i].num << " " << a[i].ch << " " << a[i].name << endl;
    }
    return 0;
}
