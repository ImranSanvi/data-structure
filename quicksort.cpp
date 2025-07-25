#include <bits/stdc++.h>
using namespace std;

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };

    int parti_tion(int low , int high){
    int pivot = a[high];
    int i=low-1;

    for(int j=low ; j<high; j++){
        if(a[j] < pivot){
            i++;
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    int temp = a[i+1];
    a[i+1] = a[high];
    a[high] = temp;

    return (i+1);
}

void quick_sort( int low , int high){
    if(low < high){

    int p = parti_tion(low , high);
    quick_sort(low , p-1);
    quick_sort(p+1 , high);

    }

}


int main() {

   int i;

   quick_sort(0, 10);

   for(i = 0; i <11 ; i++){
      cout << a[i] << " ";
   }
   cout << endl;

   return 0;
}