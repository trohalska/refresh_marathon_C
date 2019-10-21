int mx_sqrt(int x) {
    int s = 1;
    while (s*s != x && s*s < x) {
        s++;
    }
    if (x < 0 || s*s != x) {
        s = 0;
    }
    return s;
}
