#include <stdio.h>


int main (void) {
  int i = 7;
  int* p = &i;
  int* q = &i;
  // p = i; wrong;
  // *p = &i; wrong;
  // p = &q; wrong;
  p = *&q;
  p = q;
  // p = *q; wrong;
  // *p = q; wong;
  *p = *q;

  // printf("p=i: %p\n", p); // wrong;
  // printf("*p=&i: %p\n", p); // wrong;
  // printf("p=&q: %p\n", p); // wrong;
  printf("p=*&q: %p\n", p);
  printf("p=q: %p\n", p);
  // printf("p=*q: %p\n", p); // wrong;
  // printf("*p=q: %p\n", *p); // wrong;
  printf("*p=*q: %d\n", *p);


  printf("\n\n");
  printf("i has value: %d\n", i);
  printf("*p: %d\n", *p);
  printf("&p: %p\n", &p);
  printf("*&p: %p\n", *&p);
  printf("&*p: %p\n", &*p);
  // printf("*i: %d\n", *i); // wrong;
  printf("&i: %p\n", &i);
  printf("*&i: %d\n", *&i);
  printf("p: %p\n", p);

  return 0;
}