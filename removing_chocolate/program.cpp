#include<iostream>

using namespace std;

int main(){

    int n,s[100];
    cin>>n;

    s[0] = 1;
    s[1] = 1;
    s[2] = 1;
    for(int i=3;i<=n;i++){
        s[i] = s[i-1] + s[i-3];
    }
    cout<<s[n]<<endl;
    return 0;
}