#include<iostream>
using namespace std;
int main(){
   int size;
   cout<<"Enter the size of array: ";
   cin>>size;
   int arr[size];
   for(int i=0; i<size; i++){
    cin>>arr[i];
   }
   int x;
   cout<<"Enter the number: ";
   cin>>x;
   bool flag = false;
   for(int i=0; i<size; i++){
    if(arr[i] == x) flag = true;
   }

   if(flag == true) cout<<"element found";
   else cout<<"element not found";

    return 0;
}