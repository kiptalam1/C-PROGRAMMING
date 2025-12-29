#include <stdio.h>
#include <string.h>


void get_extension(const char *file_name, char *extension);

int main(void) {
  char file[20];
  char extension[20];
  printf("Enter file name: ");
  fgets(file, 20, stdin);

  get_extension(file, extension);
  printf("Extension: ");
  puts(extension);
}

void get_extension(const char *file_name, char *extension) {
  int len = strlen(file_name);
  int i;

  for (i = len - 1; i >= 0; i--)
  {
    if (file_name[i] == '.') {
      strcpy(extension, &file_name[i + 1]);
      return;
    }
  }
  extension[0] = '\0';

}
