#include <stdio.h>
#include <math.h>


int main(){
    double x1, y1, x2, y2, dist, sub1, sub2;
    scanf("%lf%lf\n%lf%lf", &x1, &y1, &x2, &y2);
    sub1=x2-x1;
    sub2=y2-y1;
    dist= sqrt(pow(sub1,2)+pow(sub2,2));
    printf("%.4lf", dist);
    return 0;
}