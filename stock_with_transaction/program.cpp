#include<iostream>

using namespace std;

int main(){
    int n,fee,buy=0,profit=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>fee;
    for(int i=0;i<n;i++){
        if(arr[i] < (arr[i+1] - 2) && buy == 0){
            buy = arr[i];
        } else {
            for(int j=i;j<6;j++){
                if(arr[j] < arr[j+1]){
                    j++;
                } else {
                    i = j;
                    break;
                }
            }
            if (buy != 0){
                profit = profit + (arr[i] - buy) - 2;
                buy = 0;
            }
        }
    }
    return 0;
}