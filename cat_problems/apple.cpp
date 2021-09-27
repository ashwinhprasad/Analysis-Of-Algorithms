#include<iostream>

using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    int weight = 0;
    int i=0;
    while(weight <= 5000){
        weight += a[i];
        if (weight < 5000){
            count++;
        }
        i++;
    }
    cout<<count<<endl;
    return 0;
}