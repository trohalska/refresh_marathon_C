#include <unistd.h>

void mx_printstr(const char *s);

int main(int c, char *v[]) {
    if (c < 2) {
        return 0;
    }
    for (int i = 1; i < c; i++) {
        mx_printstr(v[i]);
        write(1, "\n", 1);
    }
    return 0;
}
