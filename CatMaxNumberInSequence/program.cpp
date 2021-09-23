/*
You are given an integer n. An array nums of length n + 1 is generated in the following way:
nums[0] = 0
nums[1] = 1
nums[2 * i] = nums[i] when 2 <= 2 * i <= n
nums[2 * i + 1] = nums[i] + nums[i + 1] when 2 <= 2 * i + 1 <= n
Return the maximum integer in the array nums​​​.
*/

# include<iostream>

using namespace std;

int main(){
    int n,max;
    cin>>n;
    int a[100],b[n];
    a[0] = 0;
    a[1] = 1;
    for(int i=0;i<=100;i++){
        if(2<= 2*i && 2*i <= 100){
            a[2*i] = a[i];
        } if (2 <= (2*i) + 1 && (2*i) + 1 <= 100){
            a[(2*i)+1] = a[i] + a[i+1];
        }
    }
    for(int i=0;i<n+1;i++){
        b[i] = a[i];
    }   
    max = b[0];
    for(int i=0;i<n+1;i++){
        if(max < b[i]){
            max = b[i];
        }
    }    
    cout<<max;
    return 0;
}