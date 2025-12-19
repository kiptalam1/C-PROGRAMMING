#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main (void) {
  int hr, min, sec;
  long total_sec = 1200034;

  split_time(total_sec, &hr, &min, &sec);
  printf("%dhrs %dmin %dsecs\n", hr, min, sec);

  return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
  total_sec %= 86400;
  *hr = total_sec / 3600;
  *min = (total_sec % 3600) / 60;
  *sec = total_sec % 60;

}