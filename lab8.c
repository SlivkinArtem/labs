#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char str1[50], str2[50], str3[50], ch; // первая строка, вторая, доп строка и символ для поиска
    char *p;
    int n;
    printf("%s", str3);
    scanf("%s %s %s\n", &str1, &str2, &ch);
    strcpy(str3, str1);
    scanf("%d", &n);
    strncat(str1, str2, n);
    printf("2) %s \n", str1);
    printf("5) %s \n", strncpy(str1, str2, sizeof(str1)));
    //printf("%s \n",strchr(str1,ch));
    printf("8)Number of %c is: %d\n", ch, strlen(str1)-strlen(strchr(str1, ch))+1);
    //printf("9)%s \n",strrchr(str2,ch));
    p = strrchr(str1, ch);
    printf ("9)Last occurence of %c found at %d \n",ch,(p-str1+1));
    //printf("%s %s %s", str1, str2, str3);
    printf("12)Length of the part of the %s that doesn't consist any from the %s is: %d\n", str3, str2,
           strcspn(str3,str2));
    return 0;
}
