#include<stdio.h>
int main(){
    int row,col,x,y;
    printf("enter rows & coloumn\n");
    scanf("%d",&row);
    
    for(x=1;x<=row;x++){
        for(y=1;y<=row;y++){
            if(x==1 || x==row || y==1 || y==row){
               printf("*");
            }
            else{
                printf(" ");
            }
         }
         printf("\n");
    }
    return 0;
}
   