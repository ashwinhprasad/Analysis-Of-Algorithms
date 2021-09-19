#include<iostream>
#define max(a,b) (a>b?a:b)

using namespace std;

int house_robber(int n , int a[])
{
    int maxrobamount[100];
    if(n==0)
    return 0;
    if(n==1)
    return a[0];
    maxrobamount[0]=a[0];
    maxrobamount[1]=a[1];
    for(int i=2;i<n;i++)
    {
        maxrobamount[i]=max(a[i] + maxrobamount[i-2],maxrobamount[i-1]);
    }
    return maxrobamount[n-1];
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<house_robber(n,a)<<endl;
}