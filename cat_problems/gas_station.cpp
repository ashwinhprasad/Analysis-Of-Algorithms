#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int gas[n],cost[n];
    for(int i=0;i<n;i++){
        cin>>gas[i];
    }
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    int tt=0,ct=0,sp=0;
    for(int i=0;i<n;i++){
        tt = tt + gas[i] - cost[i];
        ct = ct + gas[i] - cost[i];
        if(ct < 0){
            ct = 0;
            sp = i+1;
        }
    }
    if(tt >= 0){
        cout<<sp<<endl;
    } else {
        cout<<-1<<endl;
    }
    return 0;
}