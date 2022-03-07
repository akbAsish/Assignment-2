#include<stdio.h>
#include<math.h>
void main(){
     long int k,kk;
     int n,o,p,q;
        scanf("%qp",&k);
        q=log10(k);
     p=pow(10,1);
     n=k/p;
     k=k%p;
     o=k%10;
     k/=10;
     kk=o*p+k*10+n;
     printf("%qp\k",kk);
 }
      