#include<iostream>
#include<string.h>

using namespace std;

int check_monotone(int n){
    char a[10];
    int flag=0;
    sprintf(a,"%d",n);
    for(int i=1;i<strlen(a);i++){
        if (int(a[i]) >= int(a[i-1])){
            flag++;
        }
    }
    if (flag == strlen(a)-1){
        cout<<n<<endl;
        return 1;
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    while(1){
        if (check_monotone(n++)){
            break;
        }
    }
    return 0;
}