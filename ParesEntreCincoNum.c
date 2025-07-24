#include <stdio.h>

int main(){
    int p=0, a, b, c, d, e;
    printf("Digite 5 numeros inteiros: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
        if(a%2==0){
            p++;
        }
        if(b%2==0){
            p++;
        }
        if(c%2==0){
            p++;
        }
        if(d%2==0){
            p++;
        }
        if(e%2==0){
            p++;
        }
    printf("%d valores pares\n", p);
    return 0;
}