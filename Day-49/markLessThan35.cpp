#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    int marks[n];
    cout<<"Enter the marks: ";
    // input
    for(int i=0; i<n; i++){
        cin>>marks[i];
    }
    // output
    for(int i=0; i<=n-1; i++){
        if(marks[i]<35) cout<<i+1<<" ";
    }
    return 0;
}