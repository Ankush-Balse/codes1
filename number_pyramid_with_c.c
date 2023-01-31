#include<stdio.h>
void main(){
    int notes[]={2000,500,200,100,50,20,10,5,2,1};
    int i,n;
    printf("Enter the amount in rupees : ");
    scanf("%d",&n);
    printf("The denominaƟons of %d are :\n",n);
    for(i=0;i<7;i++){
        if(n>=notes[i]){
            printf("Number of Rs.%d notes = %d\n",notes[i],n/notes[i]);
            n=n%notes[i];
        }
    }
    for(i=7;i<10;i++){
        if(n>=notes[i]){
            printf("Number of Rs.%d coins = %d\n",notes[i],n/notes[i]);
            n=n%notes[i];
        }
    }
}