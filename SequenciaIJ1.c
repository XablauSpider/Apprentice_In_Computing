#include <stdio.h>

int main(){
    int i=1, j=60;
    printf("I=1 J=60\n");
    while (j!=0 || i<j){
        i=i+3;
        j=j-5;
        printf("I=%d J=%d\n", i, j);
    }
    return 0;
}