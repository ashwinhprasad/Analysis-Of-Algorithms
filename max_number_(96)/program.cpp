/*
    given a number with only 9 and 6 has it's digits, change one digit in such a way that
    it maximises the number    
*/

#include<iostream>

using namespace std;

int main(){
    int n,a,dig=0,temp,flag=0,divider,ans=0;
    cin>>n;
    a = n;
    while(a){
        dig++;
        a/=10;
    }
    a = n;
    for(int i=0;i<dig;i++){
        divider=1;
        for(int j=1;j<dig-i;j++){
            divider *= 10;
        }
        temp = a/divider;
        if(temp == 6 && flag==0){
            temp = 9;
            flag=1;
        }
        ans = ans*10 + temp;
        a %= divider;
    }
    cout<<ans<<endl;
    return 0;
}