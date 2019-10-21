#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int main() {
    char *s1 = "Hello wor";
    char *s2 = "Hello wor";
    printf("%d", mx_strcmp(s1, s2));
    return 0;
}
