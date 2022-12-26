#include <stdio.h>
#include "square.h"


int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    struct dot* a = new_dot(x1, y1);
    struct dot* b = new_dot(x2, y2);
    struct dot* c = new_dot(x3, y3);
    struct dot* d = new_dot(x4, y4);
    printf("%lf %lf %lf %lf %lf %lf %lf %lf", a->x, a->y, b->x, b->y, c->x, c->y, d->x, d->y);
    struct square* t = new_square(a, b, c, d);
    printf("\nPerimeter of such square is: %f, Square: %f", perimeter(t), area(t));
    return 0;
}
