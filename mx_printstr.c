#include <unistd.h>

int mx_strlen(const char *s);

void mx_printstr(const char *s) {
    int n = mx_strlen(s);
    int i = 0;
    while (i < n) {
        write(1, &s[i], 1);
        i++;
    }
}
