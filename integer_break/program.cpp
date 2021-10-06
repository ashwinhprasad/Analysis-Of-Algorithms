#include<iostream>

using namespace std;

int main(){
    int n,p=1;
    cout<<"Enter n: ";
    cin>>n;
    if(n < 4){
        cout<<n-1<<endl;
        return 0;
    }
    while(n > 4){
        p *= 3;
        n -= 3; 
    }
    cout<<p*n<<endl;
}