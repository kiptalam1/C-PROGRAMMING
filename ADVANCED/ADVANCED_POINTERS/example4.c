#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int x;
  struct Node* next;
} node_t;

void insert_end(node_t **root, int value);

void deallocate(node_t **root);

int main (int argc, char* argv[]) {
  node_t *root = NULL;

  // if (root == NULL) {
  //   exit(EXIT_FAILURE);
  // }

  insert_end(&root, 5);
  insert_end(&root, 13);
  insert_end(&root, 22);


  // using *FOR* loop to display values;
  for (node_t *curr = root; curr != NULL; curr = curr->next)
  {
    printf("%d\n", curr->x);
  }

  deallocate(&root);
  return 0;
}

void insert_end(node_t** root, int value) {
  // 1. create new node;
  node_t *new_node;
  new_node = malloc(sizeof(node_t));
  new_node->next = NULL;
  new_node->x = value;
  // 2. check if root is null;
  if (*root == NULL) {
    *root = new_node;
    return;
  }
  // 3. loop through and insert at end;
  node_t *curr = *root;
  while (curr->next != NULL) {
    curr = curr->next;
  }
  curr->next = new_node;
}


void deallocate(node_t** root) {
  node_t *curr = *root;
  while (curr != NULL) {
    node_t *aux = curr;
    curr = curr->next;
    free(aux);
  }

  *root = NULL;
}
