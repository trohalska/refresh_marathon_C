#include <stdlib.h>

int mx_strlen(const char *s);
char *mx_strcpy(char *dst, const char *src);
char *mx_strnew(const int size);

char *mx_strdup(const char *str) {
    // check
    if (!str) {
        return NULL;
    }
    // all good
    char *p = mx_strnew(mx_strlen(str));
    if (p == NULL) {
        return NULL;
    }
    p = mx_strcpy(p, str);    
    return p;
}
