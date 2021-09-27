#include<iostream>

using namespace std;

int main(){
    int n,m,i,count=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    i=0;
    while(i < n){
        if((a[i] == 0) && (i == 0 || a[i-1] == 0) && (i==n-1 || a[i+1] == 0)){
            count++;
            a[i++] = 0;
        }
        i++;
    }
    if(count >= m){
        cout<<"can plant"<<endl;
    } else {
        cout<<"can not plant"<<endl;
    }
    return 0;
}