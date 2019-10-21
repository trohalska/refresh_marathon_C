#include <stdio.h>

int mx_strlen(const char *s);

int main() {
    char *s = "Hello world";
    int i = mx_strlen(s);
    printf("strlen = %d", i);
    return 0;
}
