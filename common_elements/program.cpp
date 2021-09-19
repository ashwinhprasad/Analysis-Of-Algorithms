
// find the common elements from 2 arrays 


#include<iostream>

using namespace std;


/*

// (Twin Pointers Algorithm)
 
int main(){

    int m,n;

    cout<<"Enter the size of the first array: ";
    cin>>m;

    cout<<"Enter the size of the second array: ";
    cin>>n;

    int a[m],b[n];

    for(int i=0;i<m;i++){
        cout<<"Enter the "<<i+1<<"th element: ";
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th element: ";
        cin>>b[i];
    }

    int i=0,j=0;

    while(i <= m && j<= n){
        if(a[i] == b[j]){
            cout<<a[i]<<" ";
            i++;
            j++;
        } else if (a[i] < b[j]){
            i++;
        } else {
            j++;
        }
    }
    return 0;

}

*/


// (Brute force algorithm)


/*

int main(){

    int m,n;

    cout<<"Enter the size of the first array: ";
    cin>>m;

    cout<<"Enter the size of the second array: ";
    cin>>n;

    int a[m],b[n];

    for(int i=0;i<m;i++){
        cout<<"Enter the "<<i+1<<"th element: ";
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th element: ";
        cin>>b[i];
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if (a[i] == b[j]){
                cout<<a[i]<<" ";
            }
        }
    }
    
    return 0;

}

*/