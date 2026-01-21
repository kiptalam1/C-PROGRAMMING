#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
  int x;
  struct Node* next;
} node_t;

void insert_end(node_t** root, int value);
void insert_beginning(node_t** root, int value);
void insert_after(node_t* node, int value);
void deallocate(node_t** root);

int main (int argc, char* argv[]) {
  node_t *root = NULL;

  insert_beginning(&root, 5);
  insert_beginning(&root, 13);
  insert_beginning(&root, 22);

  insert_after(root, 42);
  insert_after(root->next->next, 33);

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


void insert_beginning(node_t** root, int value) {
  // 1. create a new node with value;
  node_t *new_node = malloc(sizeof(node_t));
  if (new_node == NULL) {
    printf("malloc failed in insert_beginning\n");
  }
  new_node->x = value;
  // 2. link new node to root;
  new_node->next = *root;
  // 3. now make new node to be the new root;
  *root = new_node;
}

void insert_after(node_t* node, int value) {
  node_t *new_node = malloc(sizeof(node_t));
  if (new_node == NULL)
    printf("malloc failed at insert_after\n");

  new_node->x = value;
  new_node->next = node->next;
  node->next = new_node;
}