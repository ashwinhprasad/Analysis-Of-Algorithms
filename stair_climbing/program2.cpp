#include<iostream>

using namespace std;

int a[100];

int memoization(int n){
    if (a[n] != -1){
        return a[n];
    }
    a[n] = memoization(n-1) + memoization(n-2);
    return a[n];
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    a[0] = 1;
    a[1] = 1;
    for(int i=2;i<=n;i++){
        a[i] = -1;
    }
    cout<<memoization(n)<<endl;
    return 0;
}