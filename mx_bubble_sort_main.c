int mx_bubble_sort(char **arr, int size);

#include <stdio.h>

int main () {
  char *arr[] = {"abc", "xyz", "ghi", "def", "fjkdhg"};
  int s = mx_bubble_sort(arr, 5);
  printf("%d", s);
  return 0;
}
