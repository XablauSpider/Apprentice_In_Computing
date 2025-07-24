#include <stdio.h>
#include <stdlib.h>

int sort(int a, int b, int c){
    if(a>b){
        a=a+b;
        b=a-b;
        a=a-b;
    }
    if(a>c){
        a=a+c;
        c=a-c;
        a=a-c;
    }
    if(b>c){
        b=b+c;
        c=b-c;
        b=b-c;
    }
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}

int main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    sort(x, y,z);
    printf(" \n");
    printf("%d\n%d\n%d\n", x, y, z);
    return 0;
}