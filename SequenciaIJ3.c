#include <stdio.h>

int main(){
    int j;
    for(j=7;j>=5;j--){
        printf("I=1 J=%d\n", j);
    }
    for(j=9;j>=7;j--){
        printf("I=3 J=%d\n", j);
    }
    for(j=11;j>=9;j--){
        printf("I=5 J=%d\n", j);
    }
    for(j=13;j>=11;j--){
        printf("I=7 J=%d\n", j);
    }
    for(j=15;j>=13;j--){
        printf("I=9 J=%d\n", j);
    }
    return 0;
}