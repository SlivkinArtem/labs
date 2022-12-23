#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void add(double **a, int n){
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 2; j++){
            scanf("%lf", &a[i][j]);
        }
}

float** distance(double **p, double **mass, int n) {
    int i;
    int j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            mass[i][j] = sqrt(pow((p[i][0] - p[j][0]), 2) + pow((p[i][1] - p[j][1]), 2));
        }
    }
}

void print(double **a, int n){
    for (int i = 0; i < n; i++){
        for (int j = 1; j < n; j++){
            printf("%d - %d: %lf", i+1, j+1, a[i][j]);
            printf("\n");
        }
    }
}

int main(){
    int n;
    double **a, **res;
    scanf("%d", &n);
    a = (double**)malloc(sizeof(double*)*n);
    for (int i = 0; i < n; i++){
        a[i] = (double *)malloc(n*sizeof(double));
    }
    res = (double**)malloc(sizeof(double*)* n);
    for (int i = 0; i < n; i++) {
        res[i] = (double *) malloc(n * sizeof(double));
    }
    add(a,n);
    distance(a,res,n);
    print(res, n);
    return 0;
}
