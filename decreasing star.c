#include<stdio.h>
int main(){
    int rows,i,j,k;
    printf("enter no. of rows");
    scanf("%d",&rows);
    for(i=0;i<rows;i++){
        for(j=rows-1;j>i;j--){
            printf("  ");
        }
        for(k=0;k<=i;k++){
            printf("* ");
        }
        printf("\n");
    }
}
