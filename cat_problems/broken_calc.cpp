#include<iostream>

using namespace std;

int main(){

    int m,n,count=0;
    cin>>m>>n;

    if(n > m){
        count++;
        if(n%2 == 0){
            n/=2;
        } else {
            n += 1;
        }
    }
    count = count + (m - n);
    cout<<count;
}