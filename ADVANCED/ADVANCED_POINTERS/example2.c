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
  root.next->next = (node_t *)malloc(sizeof(node_t));
  root.next->next->x = 22;
  root.next->next->next = NULL;


  // using *WHILE* loop;
  // node_t* curr = &root;
  // while (curr != NULL) {
  //   printf("%d\n", curr->x);
  //   curr = curr->next;
  // }

  // using *FOR* loop;
  for (node_t *curr = &root; curr != NULL; curr = curr->next)
  {
    printf("%d\n", curr->x);
  }

  free(root.next->next);
  free(root.next);
  root.next->next = NULL;
  root.next = NULL;



  return 0;
}