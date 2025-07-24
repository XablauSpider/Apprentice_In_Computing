#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, c, d, e;
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int par=0, imp=0;
    if(a%2==0){
        par++;
    }else{
        imp++;
    }
    if(b%2==0){
        par++;
    }else{
        imp++;
    }
    if(c%2==0){
        par++;
    }else{
        imp++;
    }
    if(d%2==0){
        par++;
    }else{
        imp++;
    }
    if(e%2==0){
        par++;
    }else{
        imp++;
    }
    int pos=0, neg=0;
    if(a>0){
        pos++;
    }else if(a<0){
        neg++;
    }
    if(b>0){
        pos++;
    }else if(b<0){
        neg++;
    }
    if(c>0){
        pos++;
    }else if(c<0){
        neg++;
    }
    if(d>0){
        pos++;
    }else if(d<0){
        neg++;
    }
    if(e>0){
        pos++;
    }else if(e<0){
        neg++;
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) postivo(s)\n%d valor(es) negativo(s)\n", par, imp, pos, neg);
    return 0;
}