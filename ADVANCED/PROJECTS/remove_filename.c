#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
void remove_filename(char *url);

int main (void) {
  char file[MAX_LEN] = "http://www.knking.com/index.html";

  remove_filename(file);

  puts(file);

  return 0;
}

void remove_filename(char *url) {
  int i;
  int len = strlen(url);
  for (i = len - 1; i >= 0; i--) {
    if (url[i] == '/') {
      url[i] = '\0';
      return;
    }
  }
}
