#include <stdio.h>

char *mx_strcpy(char *dst, const char *src);

int main() {
    char s1[10] = "hello wor";
    char *s2 = "abra";
    printf("%s", mx_strcpy(s1, s2));
    return 0;
}
