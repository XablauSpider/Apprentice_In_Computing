#include <stdio.h>

int main(){
    float n1=-1, n2=-1, m;
    while (n1<0 || n1>10){
        scanf("%f", &n1);
        if(n1<0 || n1>10){
            printf("nota invalida");
        }
    }
    while (n2<0 || n2>10){
        scanf("%f", &n2);
        if(n2<0 || n2>10){
            printf("nota invalida");
        }
    }
    m= (n1+n2)/2.0;
    printf("media = %.2f", m);
    return 0;
}