#include<stdio.h>
#include<string.h>
void main(){
    char arr[50],str[50],ans[100];
    gets(arr);
    gets(str);
    strcat(arr,str);
    int k=strlen(arr);
    for(int i=k-2;i>=0;i--){
        printf("%c",arr[i]);
    }
 }