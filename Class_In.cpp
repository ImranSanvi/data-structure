#include<bits/stdc++.h>
using namespace std;

class student{

    public:
    string name;
    int id;
    int age;
    double cg;

    void printInfo(){
        cout << "Name : " << name << endl;
        cout << "ID : " << id << endl;
        cout << "Age : " << age << endl;
        cout << "CG : " << cg << endl;
        cout << endl;
    }

    student(string s , int i , int age , double d){
        name = s;
        id = i;
        this->age = age;
        cg = d;
    }

    student(string s , int i , int age){
        name = s;
        id = i;
        this->age = age;
    }

    //Destructor called in reverse order
    ~student(){
        printInfo();
    }

};

int main(){

    student s1("Imran Mohammed"  , 20701024 , 22 , 3.60);
    s1.printInfo();

    student s2("sanvi"  , 20701087 , 22);
    s2.printInfo();

    return 0;
}
