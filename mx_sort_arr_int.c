void mx_sort_arr_int(int *arr, int size) {
    if (!arr || size <= 0) {
        return;
    }
    int min = 0;
    int tmp = 0;
    for (int i = 0; i < size - 1; i++){
        min = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
        }
    }
}
