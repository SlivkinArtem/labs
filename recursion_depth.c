#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

struct time{
    long tv_sec;
    long tv_usec;
};
long long FibIter(int x){

    long long fib0 = 0;
    long long fib1 = 1;
    long long fib;
    for (int i = 1; i < x; ++i){
        fib = fib0 + fib1;
        fib0 = fib1;
        fib1 = fib;
    }
    return fib;

}

long long FibRec(int x){
    if (x < 1) return 0;
    if (x < 2) return 1;

    return FibRec(x - 2) + FibRec(x - 1);
}

int main(){
    long long x;
    scanf("%lli", &x);
    struct timeval start, end;
    gettimeofday(&start, NULL);
    printf("Iteration: %lli\n", FibIter(x));
    gettimeofday(&end, NULL);
    long seconds = (end.tv_sec - start.tv_sec);
    long micros = ((seconds * 1000000) + end.tv_usec) - (start.tv_usec);
    printf("The elapsed time is %d seconds and %d micros\n", seconds, micros);

    gettimeofday(&start, NULL);
    printf("Recursion: %lli\n", FibRec(x));
    gettimeofday(&end, NULL);
    long seconds1 = (end.tv_sec - start.tv_sec);
    long micros1 = ((seconds * 1000000) + end.tv_usec) - (start.tv_usec);
    printf("The elapsed time is %d seconds and %d micros\n", seconds1, micros1);
    return 0;
}
