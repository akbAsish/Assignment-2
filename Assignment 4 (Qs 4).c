#include<stdio.h>
int main(){
    int k;
    printf("Enter no of terms in fibonacci staring with 1 & 0");
    scanf("%d",&k);
    int a=0;
    int b=1;
    int sum;
    for(int i=1;i<=k;i++){
        printf("%d\k",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
    }
   