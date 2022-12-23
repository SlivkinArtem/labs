#ifndef PROGLAB11_SQUARE_H
#define PROGLAB11_SQUARE_H
struct dot {
    double x;
    double y;
};

struct square {
    struct dot A;
    struct dot B;
    struct dot C;
    struct dot D;
};

struct side {
    double x;
    double y;

};

struct dot new_dot(double, double);
struct side new_side(struct dot, struct dot);
struct square new_square(struct dot, struct dot, struct dot, struct dot);
double length(struct side);
double area(struct square);
double per(struct square);
#endif //PROGLAB11_SQUARE_H
