#include <stdlib.h>
#include <stdio.h>

char *mx_strdup(const char *str);

int main() {
    char *s = "hello";
    char *d = mx_strdup(s);
    printf("%s", d);
    return 0;
}
