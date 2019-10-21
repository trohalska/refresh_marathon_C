#include <unistd.h>

void mx_printchar(char c);

void mx_print_alphabet(void) {
    char a = 'A';
    char b = a + 33;
    while (a <= 'Z') {
        mx_printchar(a);
        mx_printchar(b);
        a += 2;
        b += 2;
    }
    write(1, "\n", 1);
}
