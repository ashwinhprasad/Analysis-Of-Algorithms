#include<iostream>

using namespace std;

int bruteForce(int n){
    if ( n == 1 || n == 2)  return n;
    return bruteForce(n-1) + bruteForce(n-2);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"Brute Force : "<<bruteForce(n)<<endl;
    return 0;
}