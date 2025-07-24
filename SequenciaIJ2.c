#include <stdio.h>

int main(){
    int i=1, j;
    for(j=7; j>=5; j--){
        printf("I=1 J=%d\n", j);
    }
    for(j=7; j>=5; j--){
        printf("I=3 J=%d\n", j);
    }
    for(j=7; j>=5; j--){
        printf("I=5 J=%d\n", j);
    }
    for(j=7; j>=5; j--){
        printf("I=7 J=%d\n", j);
    }
    for(j=7; j>=5; j--){
        printf("I=9 J=%d\n", j);
    }
    return 0;
}