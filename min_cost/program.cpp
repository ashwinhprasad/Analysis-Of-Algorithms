#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int mincost[n+1],arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }


    mincost[0] = 0;
    mincost[1] = 0;

    for(int i=2;i<=n;i++){
        int one_step = mincost[i-1] + arr[i-1];
        int two_step = mincost[i-2] + arr[i-2];
        mincost[i] = min(one_step,two_step);
    }
    cout<<mincost[n]<<endl;
}
