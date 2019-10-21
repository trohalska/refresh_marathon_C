#include <stdio.h>

void mx_sort_arr_int(int *arr, int size);

int main() {
    int s[7] = {3, 55, -11, 1, 0, 4, 22};
    mx_sort_arr_int(s, 7);
    for (int i = 0; i < 7; i++) {
        printf("%d, ", s[i]);
    }
    return 0;
}
