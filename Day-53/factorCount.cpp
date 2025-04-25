#include <iostream>
using namespace std;

int factorCount(int n) {
    int c = 0;
    int i;
    for(i=1; i*i<n; i++){
        if(n%i == 0) c = c + 2;
    }
    if(i*i == n) c = c + 1;
    return c;
}

int main() {
    int n;
    cin>>n; 
    int result = factorCount(n);
    cout<<result;
    return 0;
}