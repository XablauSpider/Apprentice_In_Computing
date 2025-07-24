#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int A, M, D, r, V;
    scanf("%d", &V);
    r= V%365;
    A= V/365;
    M= r/30;
    D= r%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)", A, M, D);
    return 0;
}