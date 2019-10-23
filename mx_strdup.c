#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    char *p = mx_strnew(mx_strlen(str));
    /*if (p == NULL) {
        return NULL;
    }*/
    return mx_strcpy(p, str);
}

