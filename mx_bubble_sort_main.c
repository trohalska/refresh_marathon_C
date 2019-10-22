int mx_bubble_sort(char **arr, int size);

#include <stdio.h>

int main () {
  //char *arr[] = {"0PlewJ", "5", "TUQNQ", "qpaKf", "xV3A3h4", "f", "xjinmO", "cBB8DW4RJ8", "tRetwwgza", "zKGhP"};
  char *arr[] = {"WzK0aowR", "x7I3YbO", "0zsD5", "ClR"};
  int s = mx_bubble_sort(arr, 4);
  printf("%d\n", s);
  for (int i = 0; i < 4; i++) {
    printf("%s, ", arr[i]);
  }
  return 0;
}
