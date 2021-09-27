#include<iostream>

using namespace std;

int main(){

    int n,min=INT32_MAX,profit = 0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(min > a[i]){
            min = a[i];
        } else if (a[i] - min > profit) {
            profit = a[i] - min;
        }
    }
    cout<<profit<<endl;
    return 0;
}