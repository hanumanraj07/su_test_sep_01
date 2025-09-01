#include <stdio.h>
int main(){
    int u;
    printf("Enter your units\n");
    scanf("%d",&u);
    if (u>=0 && u<=50){
        printf("%d Rupees",u*2+100);
    }else if(u>=51 && u<=100){
        printf("%d Rupees",u*3+100);
    }else if(u>=101 && u<=200){
        printf("%d Rupees",u*4+100);
    }else if(u>=201 && u<=300){
        printf("%d Rupees",u*5+100);
    }else if(u>=301 && u<=500){
        printf("%d Rupees",u*6+100);
    }else if(u>500){
        printf("%d Rupees",u*8+100);}
    else {
        printf("invalid digit");
    }
                 



    return 0;
}