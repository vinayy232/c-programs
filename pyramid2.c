#include<stdio.h>
int main(){
int i,j,k,rows,l,n;
    /*printf("enter no of rows");
    scanf("%d",&rows);*/
printf("Enter the no of lines: ");
scanf("%d",&n);
for(i=0;i<n;i++){
for(j=n;j>i;j--){
printf(" ");
}
for(k=0;k<=i;k++){
printf("*");
}
for(l=i-1;l>=0;l--){
printf("*");
}
printf("\n");
}
}
