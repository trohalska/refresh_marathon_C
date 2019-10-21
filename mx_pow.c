double mx_pow(double n, int pow) {
    double p = n;
    if (pow < 0 || n == 0) {
        return 0;
    }
    else if (pow == 0) {
        return 1;
    }
    while (pow > 1) {
        p *= n;
        pow -= 1;
    }
    return p;
}
