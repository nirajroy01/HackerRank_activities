#include<iostream>
#include<climits>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
     cin>>arr[i];
    }

    // int max = arr[0];
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(max < arr[i]) max = arr[i];
    }

    int smax = INT_MIN;
    for(int i=0; i<size; i++){
        if(arr[i] != max && smax < arr[i]) smax = arr[i];
    }
    cout<<max<<endl;
    cout<<smax;
    return 0;
}