#include<stdio.h>
void main(){
   int n,i,j,k;
   printf("Enter a number : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       for(j=n;j>0;j--){
           if(j>i){
               printf(" ");
           }
           else{
               printf("* ");
           }
       }
       printf("\n");
   }
}

