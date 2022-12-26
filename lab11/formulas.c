#include "square.h"
#include <math.h>
#include <malloc.h>

struct dot* new_dot(double a, double b){
    struct dot* d = malloc(sizeof(struct dot));
    d->x = a;
    d->y = b;
    return d;
}

struct side* new_side(struct dot* a, struct dot* b){
    struct side* s = malloc(sizeof(struct side));
    s->x = a->x - b->x;
    s->y = a->y - b->y;
    return s;
}

struct square* new_square(struct dot* A, struct dot* B, struct dot* C, struct dot* D){
    struct square* t = malloc(sizeof(struct square));
    t->A = A;
    t->B = B;
    t->C = C;
    t->D = D;
    return t;
}

double length(struct side* s){
    return sqrt(s->x*s->x + s->y*s->y);
}

double area(struct square* t){
    double a = length(new_side(t->A, t->B));
    return a * a;
}

double perimeter(struct square* t){
    double a = length(new_side(t->A, t->B));
    return a * 4;
}
