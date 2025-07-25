#include<bits/stdc++.h>
using namespace std;

int main(){
    
    //Finding Summation of 26 with two number :

    int a[] = {7,8,9,14,18,20};
    int target = 26;

    int i=0, j=5;

    while(i<=j){

        if(a[i]+a[j] == target){
            cout << a[i] << " " << a[j] << endl;
            //return 0;
        }

        else if(a[i]+a[j] > target){
            j--;
        }

        else if(a[i]+a[j] < target){
            i++;
        }
    }
    return 0;
}
