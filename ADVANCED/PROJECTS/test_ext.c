#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define MAX_LEN 20

bool test_extension(const char *file_name,
const char *extension);

int main(void) {
  char url[] = "memo.txt";
  char ext[MAX_LEN];

  fgets(ext, MAX_LEN, stdin);
  ext[strcspn(ext, "\n")] = '\0';
  if (test_extension(url, ext))
  {
    puts("true");
  }
  else
  {
    puts("false");
  }

    return 0;
}

bool test_extension(const char *file_name,
  const char *extension)
{
  const char *p = file_name;
  const char *q = extension;

  while (*p)
    p++;

  while (p != file_name && *p != '.')
    p--;

  if (*p != '.' || *(p+1) == '\0'){
    return false;
  }
  p++;

  while(*p && *q){
    if (toupper((unsigned char) *p) != 
        toupper((unsigned char) *q)){
      return false;
    }
    p++;
    q++;
  }

  return *p == '\0' && *q == '\0';
}