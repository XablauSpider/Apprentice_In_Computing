#include <stdio.h>

int main(){
    int a, b, c, d, sab, scd;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    sab=a+b;
    scd=c+d;
    if(a%2==0){
        if(b>c && d>a && scd>sab && c>0 && d>0){
            printf("Valores aceitos\n");
        }else{
            printf("Valores nao aceitos\n");
        }
    }else{
        printf("Valores nao aceitos\n");
    }
    return 0;
}