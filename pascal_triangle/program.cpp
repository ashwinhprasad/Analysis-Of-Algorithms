#include<iostream>

using namespace std;

int main(){
    int n,j,k;
    cin>>n;
    int a[n][n];
    a[0][0] = 1;
    cout<<a[0][0]<<"\n";
    for(int i=1;i<n;i++){
        a[i][0]=1;
        cout<<1<<" ";
        j=0,k=j+1;
        while(k<i){
            a[i][k] = a[i-1][k-1]+a[i-1][k];
            cout<<a[i][k]<<" ";
            k++;
        }
        a[i][i]=1;
        cout<<1<<"\n"; 
    }
}