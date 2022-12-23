#include <stdio.h>
#include "square.h"


int main()
{
    struct dot a, b, c, d;
    scanf("%lf %lf %lf %lf %lf %lf %lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y, &d.x, &d.y);
    struct square t = new_square(a,b,c,d);
    printf("Perimeter of such square is: %f, Square: %f", per(t), area(t));
    return 0;
}
