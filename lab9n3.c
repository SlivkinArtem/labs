#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char* third_task(int digit) {
    const char *str[] = {"zero", "one", "two", "three", "four",
                         "five", "six", "seven", "eight","nine"};
    return (str[digit]);
}
int main() {
    int digit;
    scanf("%d", &digit);
    printf("Your digit is %s", third_task(digit));
    return 0;
}