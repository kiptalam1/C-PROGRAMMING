#include <stdio.h>
#include <string.h>

#define MAX_LEN 100
void build_index_url(const char *domain, char *index_url);

int main(void) {
  char domain[MAX_LEN];
  char url[MAX_LEN];
  printf("Enter domain: ");
  fgets(domain, MAX_LEN, stdin);
  domain[strcspn(domain, "\n")] = '\0';

  build_index_url(domain, url);
  printf("Built: ");
  puts(url);
}

void build_index_url(const char *domain, char *index_url) {

  strcpy(index_url, "http://www.");
  strcat(index_url, domain);
  strcat(index_url, "/index.html");

}
