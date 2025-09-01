#include <stdio.h>
int main(){
    char c;
    printf("Type any character:");
    scanf("%c",&c);
    if (c>=65 && c<=90 ){
        printf("Uppercase Alphabet");
    }
    else if (c>=97 && c<=122){
        printf("lowwercase Alphabet");
    }
    else if (c>=48 && c<=57){
        printf("Digit");
    }else{
        printf("Special Symbol");
    }


    return 0;
}