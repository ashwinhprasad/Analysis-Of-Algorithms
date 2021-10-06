#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[20];
    int max=0,temp,flag,k=0,odd;
    scanf("%s",a);
    for(int i=0;i<strlen(a);i++){
        int count=0,flag=0;
        for(int j=0;j<strlen(b);j++){
            if(b[j] == a[i]){
                flag = 1;
                break;
            }
        }
        if (flag==1){
            continue;
        }
        else {
            b[k] = a[i];
            for(int j=0;j<strlen(a);j++){
                if(a[i] == a[j]){
                    count++;
                }
            }
            if(count%2==1){
                count--;
                odd = 1;
            }
            max += count;
            k++;
        }
    }
    if (odd == 1){
        max+=1;
    }
    printf("%d",max);
}