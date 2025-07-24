#include <stdio.h>

int main(){
    int x;
    float y, c, kml;
    scanf("%d%f", &x, &y);
    kml=x/y;
    printf("%.3f km/l\n", kml);
    return 0;
}