# include<stdio.h>

int main(){
    char alpha;
    printf("\nenter any alphabet\n");
    scanf("%c",&alpha);
    if(alpha == 'a' || alpha == 'e' || alpha == 'i'|| alpha == 'o' || alpha == 'u'){
        printf("%c is vowel", alpha);

    }
    else{
        printf("%c is consonant", alpha);
    }
}
