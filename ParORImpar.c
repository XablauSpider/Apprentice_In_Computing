#include <stdio.h>

int main(){
    int quant, i, x;
    scanf("%d", &quant);
    for(i=1;i<=quant;i++){
        scanf("%d", &x);
        if(x%2==0 && x>0){
            printf("EVEN POSITIVE\n");
        }
        if(x%2!=0 && x>0){
            printf("ODD POSITIVE\n");
        }
        if(x%2==0 && x<0){
            printf("EVEN NEGATIVE\n");
        }
        if(x%2!=0 && x<0){
            printf("ODD NEGATIVE\n");
        }
        if(x==0){
            printf("NULL\n");
        }
    }
    return 0;
}