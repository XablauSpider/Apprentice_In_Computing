#include <stdio.h>

int main(){
    int a, b, d;
    scanf("%d%d", &a, &b);
    if(a<b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    d=a%b;
    if(d==0){
        printf("Sao Multiplos\n");
    }else{
        printf("Nao sao Multiplos");
    }
    return 0;
}