#include<iostream>

using namespace std;

int main(){
    int share[10] = {1,2,3,4,5,6};
    int buy=0,profit=0;

    for(int i=0;i<6;i++){
        if(share[i] < share[i+1] && buy == 0){
            buy = share[i];
        } else {
            for(int j=i;j<6;j++){
                if(share[j] < share[j+1]){
                    j++;
                } else {
                    i = j;
                    break;
                }
            }
            if (buy != 0){
                profit = profit + (share[i] - buy);
                buy = 0;
            }
        }
    }
    cout<<profit<<endl;
    return 0;
}