#include<iostream>
#include<string.h>

using namespace std;

int main(){
    char a[10],curr;
    int time=0,dist;
    cin>>a;
    char init = 'a';
    for(int i=0;i<strlen(a);i++){
        curr = a[i];
        if(abs(curr - init) <= 13){
            dist = abs(curr - init);
            cout<<"from "<<init<<" to "<<curr<<" distance: "<<dist<<endl;
            init = curr;
            time += dist + 1;
        } else if (curr - init > 0){
            dist = abs(init - 'a') + 1 + abs('z' - curr);
            cout<<"from "<<init<<" to "<<curr<<" distance: "<<dist<<endl;
            init = curr;
            time += dist + 1;
        } else {
            dist = abs('z' - init) + abs('a' - curr) + 1;
            cout<<"from "<<init<<" to "<<curr<<" distance: "<<dist<<endl;
            init = curr;
            time += dist + 1;
        }
    }
    cout<<time<<endl;
    return 0;
}