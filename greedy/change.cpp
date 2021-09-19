#include<iostream>

using namespace std;

int main(){

    int a[10] = {100,50,20,10,5,2,1},n,i=0,count=0;
    cin>>n;

    while(n){
        if(n/a[i] != 0){
            count++;
            n = n - a[i];
        } else{
            i++;
        }
    }

    cout<<count<<endl;

    return 0;
}