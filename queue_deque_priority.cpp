       // In The Name Of Allah

#include<bits/stdc++.h>
using namespace std;



int main()
{
    //Queue(not unique not sort) :Complexity 0(1)
    //FIFO(first input first output):
    queue <int> q;
    q.push(3);
    q.push(7);
    q.push(5);
    q.push(3);
    q.push(4);
    cout << q.size() << endl;//5
    while(!q.empty()){
        cout << q.front() <<" ";//3 7 5 3 4 first element output
        q.pop();//first element delete
    }
    cout << endl;

    //deque (not unique not sort) :Complexity 0(1)
    //elements are added in first or last (both place)
    deque <int> dq;
    dq.push_front(3);
    dq.push_front(7);
    dq.push_front(5);
    dq.push_back(3);
    dq.push_back(4);
    cout << dq.size() << endl;//5
    cout << dq.front() << " " << dq.back() << endl;// 5 4
    dq.pop_front();
    dq.pop_back();
    cout << dq.front() << " " << dq.back() << endl;// 7 3

    //dq.empty (check empty or not)

    //Priority queue:complexity log2(n):
    //biggest value stay in top
    priority_queue <int> q;
    q.push(3);
    q.push(7);
    q.push(5);
    q.push(3);
    q.push(4);
    cout << q.size() << endl;//5
    while(!q.empty()){
        cout << q.top() <<" ";//7 5 4 3 3
        q.pop();//top element delete
    }
    cout << endl;

    //small to big element :
     priority_queue <int,vector<int>, greater<int> >q;
    q.push(3);
    q.push(7);
    q.push(5);
    q.push(3);
    q.push(4);
    cout << q.size() << endl;//5
    while(!q.empty()){
        cout << q.top() <<" ";//3 3 4 5 7
        q.pop();//top element delete
    }
    cout << endl;

    //first value greater to small and second value small to greater:
    priority_queue <pair <int,int>>q;
    q.push({1,-2});
    q.push({1,-3});
    q.push({2,-2});
    q.push({2,-1});
    q.push({1,-1});
    while(!q.empty()){
       cout << q.top().first << " " << q.top().second*-1 << endl;
        q.pop();//top element delete
    }
    /*2 1
    2 2
    1 1
    1 2
    1 3*/
    

    return 0;
}
