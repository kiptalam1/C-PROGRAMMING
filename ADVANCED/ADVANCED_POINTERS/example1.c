#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int x;
  struct Node* next;
} node_t;

int main (int argc, char* argv[]) {
  node_t root;
  root.x = 15;
  root.next = (node_t*) malloc(sizeof(node_t));
  root.next->x = -2;
  root.next->next = NULL;

  printf("First element: %d\n", root.x);
  printf("Second element: %d\n", root.next->x);
  // printf("next element before free-> : %p\n", root.next);


  free(root.next);
  root.next = NULL;
  // printf("next element after free->: %p\n", root.next);

  return 0;
}