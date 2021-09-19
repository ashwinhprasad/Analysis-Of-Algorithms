/* 
    given an array A of sorted integers and another non-negative integer K , find 2 elements such 
    a[i] - a[j] = k and i != j

 */

#include<iostream>

using namespace std;

/*
int main() {

    int n,a[10],k,flag=0;

    cout<<"Enter the number of variables : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th element: ";
        cin>>a[i];
    }

    cout<<"Enter k: ";
    cin>>k;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i != j) && ((a[i] - a[j]) == k)){
                cout<<a[i]<<" "<<a[j]<<endl;
                flag = 1;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }

    return 0;
}
*/

/*

int main(){
    int n,a[10],k,flag=0,i=0,j=0;

    cout<<"Enter the number of variables : ";
    cin>>n;

    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th element: ";
        cin>>a[i];
    }

    cout<<"Enter k: ";
    cin>>k;

    while(2*(n--)){

        if (a[j] - a[i] == k){
            cout<<a[j]<<" - "<<a[i]<<" is "<<k<<endl;
            break;
        } else if (a[j] - a[i] <= k){
            j++;
        } else {
            i++;
        }
    }
    
}

*/