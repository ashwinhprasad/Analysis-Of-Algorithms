#include<iostream>

using namespace std;

int main(){

    int n,capacity,temp,ans=0;
    float ratio[10],weight[10],value[10];

    // get input
    cin>>n;
    for(int i = 0;i < n;i++){
        cin>>weight[i];
        cin>>value[i];
        ratio[i] = value[i]/weight[i];
    }
    cin>>capacity;

    // sort by ratio
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(ratio[j] < ratio[j+1]){
                temp = ratio[j];
                ratio[j] = ratio[j+1];
                ratio[j+1] = temp;

                temp = weight[j];
                weight[j] = weight[j+1];
                weight[j+1] = temp;

                temp = value[j];
                value[j] = value[j+1];
                value[j+1] = temp;
            }
        }
    }
    int i=0;

    while(capacity > 0 && i<n){
        if(weight[i] < capacity){
            capacity -= weight[i];
            ans += value[i];
        } else {
            ans += ratio[i]*(capacity);
            capacity = 0;
        }
        i+=1;
    }
    cout<<ans<<endl;
    return 0;
}