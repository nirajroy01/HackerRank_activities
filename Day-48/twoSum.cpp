#include<iostream>
using namespace std;
int sum(int* a, int* b){
    int x = *a;
    int y = *b;
    int sum = x + y;
    return sum;
}
int main(){
    int x,y;
    cout<<"Enter the numbers: ";
    cin>>x>>y;
    cout<<"The sum is: ";
    cout<<sum(&x, &y)<<endl;

    // int* p1 = &x;
    // int* p2 = &y;
    // cout<<"The sum is: ";
    // cout<<*p1 + *p2;


    // YOU CAN ALSO TAKE INPUT USING dereference 
    // int x,y;
    // int* p1 = &x;
    // int* p2 = &y;
    // cout<<"Enter the numbers: ";
    // cin>> *p1>> *p2;
    // cout<<"The sum is: ";
    // cout<<*p1 + *p2;

}