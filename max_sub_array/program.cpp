#include<iostream>

using namespace std;

int bruteForce(int a[],int n){
    int max= INT16_MIN,cur;
    for(int i=0;i<n;i++){
        cur=0;
        for(int j=i;j<n;j++){
            cur = cur + a[j];
            max = max > cur ? max: cur;
        }

    }
    return max;
}

int kedane(int a[],int n){

    int max=a[0],cur=a[0];
    for(int i=1;i<n;i++){
        if (cur < 0){
            cur = a[i];
        } else {
            cur = cur + a[i];       
        }
        max = max > cur ? max : cur;
    }
    return max;
}



int main(){

    int n;
    cout<<"Enter n: ";
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th Element: ";
        cin>>a[i];
    }

    cout<<bruteForce(a,n)<<endl;
    cout<<kedane(a,n)<<endl;
    return 0;
}