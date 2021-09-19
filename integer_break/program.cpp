#include<iostream>

using namespace std;

int main(){
    int n,p=1;
    cout<<"Enter n: ";
    cin>>n;
    while(n > 4){
        p *= 3;
        n -= 3; 
    }
    cout<<p*n<<endl;
}