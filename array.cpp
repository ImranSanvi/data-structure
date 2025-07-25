//Array :

#include<bits/stdc++.h>
using namespace std;

int main (){
    
    //Array Declare :
    int n1;
    cin >>n1;
    int a[n1+5];
    for(int i=0; i<n1; i++){
        cin >> a[i];
    }
    
    
    //Array Traversing :
    for(int i=0; i<n1; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    
    
    //Array sorting :
    int temp=0;
    for(int i=0; i<n1; i++){
        for(int j=0; j<n1; j++){
         if(a[i] > a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
         }
      }
    }


//Array sorting by using function:
    
    
    //Array Inserting :
    int pos=3,element=99;
    for(int i=n1; i>pos-1; i--){
        a[i] = a[i-1];
    }
    a[pos] = element;
    
    
    //Array Deleting :
    int pos=3;
    for(int i=pos-1; i<n1-1; i++){
        a[i] = a[i+1];
    }
    
    
    //array Merging :
    int n2;
    cin >>n2;
    int b[n2];
    for(int i=0; i<n2; i++){
        cin >> b[i];
    }

    int n3 = n1 + n2;
    int c[n3];
    for(int i=0; i<n1; i++){
        c[i] = a[i];
    }

    for(int i=0,j=n1; i<n2; i++,j++){
        c[j] = b[i];
    }

    for(int i=0; i<n3; i++){
        cout << c[i] << " ";
    }
    
    
    //Array Reverse :
    int a2[n1];
    for(int i=0,j=n1-1; i<n1,j>=0; i++,j--){
        a2[i] = a[j];
    }
    
    
    //Array Copy :
    int a3[n1];
    for(int i=0; i<n1; i++){
        a3[i] = a[i];
    }
    
    
    //Two Dimensional array :
    int ar[3][4];
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin >> ar[i][j];
        }
    }


    return 0;
}
