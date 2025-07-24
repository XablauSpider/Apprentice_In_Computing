#include <stdio.h>

int main(){
    int c;
    float preco, quant;
    scanf("%d%f", &c, &quant);
    if(c==1){
        preco=quant*4.00;
    }
    if(c==2){
        preco=quant*4.50;
    }
    if(c==3){
        preco=quant*5.00;
    }
    if(c==4){
        preco=quant*2.00;
    }
    if(c==5){
        preco=quant*1.50;
    }
    printf("Total: R$ %.2f", preco);
    return 0;
}