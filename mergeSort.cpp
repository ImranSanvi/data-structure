
#include <bits/stdc++.h>
using namespace std;

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
    int b[11];

void merging(int low, int mid, int high) {
   int i=low,j=mid+1,k=low;

   while(i<=mid && j<=high){
    if(a[i] <= a[j]){
        b[k] = a[i];
        i++;
        k++;
    }

    else{
        b[k] = a[j];
        j++;
        k++;
    }

   }

   //Another element if there
   if(i>mid){
    while(j<=high){
        b[k] = a[j];
        j++;
        k++;
    }
   }

   else{
    while(i<=mid){
        b[k] = a[i];
        i++;
        k++;
    }
   }

   //Copy temporary array to original array:
   for(k=low; k<=high; k++){
    a[k] = b[k];
   }

}

void so_rt(int low, int high) {
   int mid;

   if(low < high) {
      mid = (low + high) / 2;
      so_rt(low, mid);
      so_rt(mid+1, high);
      merging(low, mid, high);
   }

   else {
      return;
   }

}

int main() {

   int i;

   so_rt(0, 10);

   for(i = 0; i <11 ; i++){
      cout << a[i] << " ";
   }
   cout << endl;

   return 0;
}


