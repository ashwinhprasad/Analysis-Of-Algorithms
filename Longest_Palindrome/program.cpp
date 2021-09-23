#include<stdio.h>
#include<string.h>

int main(){
    char a[100],b[20];
    int max=0,temp,flag,k=0,odd;
    scanf("%s",a);
    for(int i;i<strlen(a);i++){
        int count=0,flag=0;
        for(int j=0;j<strlen(a);j++){
            if(b[j] == a[i]){
                flag = 1;
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
            if(count == 1){
                odd = 1;
            }
            k++;
            if(count%2==1){
                count--;
                odd = 1;
            }
            max += count;
        }
    }
    if (max%2 == 0 && odd == 1){
        max+=1;
    }
    printf("%d",max);
}