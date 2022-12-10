#include <stdio.h>
#include "stdlib.h"
#include "math.h"


struct dot{
    double x;
    double y;
};
struct rectangle{
    struct dot A;
    struct dot B;
    struct dot C;
    struct dot D;
};
double lenght(const struct dot *a, const struct dot *b){
    double len = sqrt(pow(a->x - b->x, 2)+pow(a->y - b->y, 2));
    return len;
};
double area(const struct rectangle *r){
    double a = lenght(&r->A, &r->B);
    double b = lenght(&r->A, &r->C);
    return a*b;
}

union {
    int keyboard;
    struct {
        int elements: 1;
        int numlock: 1;
        int capslock: 1;
        int scrolllock: 1;
    } bit_Field;
} lock;


void main() {
    enum months {
        june, july, august
    };
    enum months chosen = july;
    printf("%d\n", chosen);

    struct dot A = {0,0};
    struct dot B = {6, 0};
    struct dot C = {0, 3};
    struct dot D = {6, 3};

    struct rectangle r = {A,B,C,D};
    printf("%lf", area(&r));
    scanf("%X", &lock.keyboard);
    printf("%d %d %d %d", abs(lock.bit_Field.elements), abs(lock.bit_Field.numlock),
           abs(lock.bit_Field.capslock), abs(lock.bit_Field.scrolllock));
}
