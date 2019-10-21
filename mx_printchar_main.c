void mx_printchar(char c);

int main() {
    char *s = "Hello world";
    int i = 0;
    while (i < 11) {
        mx_printchar(s[i]);
        i++;
    }
    return 0;
}
