#include <stdio.h>

int main(){
    int A, B, C, D, p1, p2, d;
    scanf("%d%d%d%d", &A, &B, &C, &D);
    p1= A*B;
    p2= C*D;
    d=p1-p2;
    printf("DIFERENÇA = %d", d);
    return 0;
}