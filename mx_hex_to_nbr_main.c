#include <stdlib.h>
#include <stdio.h>

unsigned long mx_hex_to_nbr(const char *hex);

int main () {
  char s[] = "y44";
  unsigned long a = mx_hex_to_nbr(s);
  printf("%s\n%lu", s, a);
  return 0;
}
