int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count);

#include <stdio.h>

int main () {
  char *arr[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
  int count = 0;
  int s  = mx_binary_search(arr, 6, "", &count);
  printf("%d %d", s, count);
  return 0;
}
