#include <stdio.h>
#include <stdlib.h>
void add(double **a, int n){
for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++){
        scanf("%lg", &a[i][j]);
    }
}
void mnzh(double **a, double **b, double **res, int n){
double ans;
for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        ans = 0;
        for (int k = 0; k < n; k++)
            ans+=a[i][k] * b[k][j];
            res[i][j] = ans;
        }
    }
}
void print(double **a, int n){
for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
        printf("%lg %lg", a[i][j], a[i][j+1]);
        printf("\n");
        j++;
        }
    }
}
int main() {
int n;
double **a, **b, **res;
scanf("%d", &n);
a = (double**)malloc(sizeof(double*)*n);
for (int i = 0; i < n; i++){
    a[i] = (double *)malloc(n*sizeof(double));
}
b = (double**)malloc(sizeof(double*)*n);
for (int i = 0; i < n; i++){
    b[i] = (double*)malloc(n * sizeof(double));
}
res = (double**)malloc(sizeof(double*)* n);
for (int i = 0; i < n; i++) {
    res[i] = (double *) malloc(n * sizeof(double));
}
add(a, n);
add(b, n);
mnzh(a, b, res, n);
print(res, n);
return 0;
}
