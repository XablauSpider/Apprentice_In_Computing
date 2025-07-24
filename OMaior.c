#include <stdio.h>

int main(){
    int v1, v2, v3, maior;
    scanf("%d%d%d", &v1, &v2, &v3);
    if(v1<v2){
        v1=v1+v2;
        v2=v1-v2;
        v1=v1-v2;
    }
    if(v1<v3){
        v1=v1+v3;
        v3=v1-v3;
        v1=v1-v3;
    }
    if(v2<v3){
        v2=v2+v3;
        v3=v2-v3;
        v2=v2-v3;
    }
    printf("%d eh o maior", v1);
}