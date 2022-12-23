#include "square.h"
#include <math.h>

struct dot new_dot(double a, double b){
    struct dot d;
    d.x = a;
    d.y = b;
    return d;
}

struct side new_side(struct dot a, struct dot b){
    struct side s;
    s.x = a.x-b.x;
    s.y = a.y-b.y;
    return s;
}

struct square new_square(struct dot A, struct dot B, struct dot C, struct dot D){
    struct square t;
    t.A = A;
    t.B = B;
    t.C = C;
    t.D = D;
    return t;
}

double length(struct side s){
    return sqrt(s.x*s.x + s.y*s.y);
}

double area(struct square t){
    double a = length(new_side(t.A, t.B));
    return a*a;
}
double per(struct square t){
    double a = length(new_side(t.A, t.B));
    return a*4;
}
