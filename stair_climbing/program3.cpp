#include<iostream>

using namespace std;

int normal(int n){
    int f= 1,s=1,temp,rear;
    for(int i=2;i<=n;i++){
        temp = f + s;
        f = s;
        s = temp;
    }
    return temp;
}


int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"normal : "<<normal(n)<<endl;
    return 0;
}