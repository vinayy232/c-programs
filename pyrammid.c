#include<stdio.h>
int main(){
    int i,j,k,rows,l,m;
    /*printf("enter no of rows");
    scanf("%d",&rows);*/
    rows = 5;
    for(i=0;i<rows;i++){
        /*for(j=rows;j>i;j--){
            printf("  ");
        }
        for(k=0;k<=i;k++){
            printf("* ");
        }*/
        for(l=0;l<rows-i;l++){
            printf(" ");
        }
        for(m=0;m<=i;m++){
            printf("* ");

        }
        printf("\n");
    }

}
