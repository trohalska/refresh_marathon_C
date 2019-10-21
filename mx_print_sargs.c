#include <unistd.h>

int mx_strcmp(const char *s1, const char *s2);
void mx_printstr(const char *s);

int main(int c, char *v[]) {
    if (c < 2) {
        return 0;
    }
    char *tmp = 0;
    int min = 0;
    for (int i = 1; i < c - 1; i++) {
        min = i;
        for (int j = i + 1; j < c; j++) {
            if (mx_strcmp(v[j], v[min]) < 0) {
                min = j;
            }
        }
        if (i != min) {
            tmp = v[i];
            v[i] = v[min];
            v[min] = tmp;
        }
    }
    for (int i = 1; i < c; i++) {
        mx_printstr(v[i]);
        mx_printstr("\n");
    }
    return 0;
}
