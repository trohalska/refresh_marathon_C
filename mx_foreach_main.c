void mx_printint(int n);
void mx_foreach(const int *arr, int size, void (*f)(int));

#include <stdio.h>

int main() {
	int arr[] = {1, 2, 3, 4, 5, 3};
	mx_foreach(arr, 6, mx_printint);
	return 0;
}
