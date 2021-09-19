#include<iostream>

using namespace std;

int count=0;


int sum(int a[],int n){
    int sum=0;
    count+=2;
    for(int i=0;i<n;i++){
        count+=2;
        sum+=a[i];
    }
    count++;
    return sum;
}

int recursive_sum(int a[],int n){
    count++;
    if(n == 0){
        count++;
        return 0;
    }
    count++;
    return a[n-1] + recursive_sum(a,n-1);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th Element"<<endl;
        cin>>a[i];
    }
    sum(a,n);
    cout<<"Ordinary Sum: "<<count<<endl;
    count=0;
    recursive_sum(a,n);
    cout<<"Recursive Sum: "<<count<<endl;
    return 0;
}