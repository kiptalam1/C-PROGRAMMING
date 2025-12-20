/*
Rewrite the make_empty, is_empty, and is_full functions of Section 10.2 to use the
pointer variable top_ptr instead of the integer variable top.
*/

// 1. store its contents in array named 'contents';
// 2. a separate integer 'top' marks position of stack top;
// 3. top = 0 when stack is empty;
// 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int *top_ptr = contents;

/* Function prototypes */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

void make_empty(void) {
  top_ptr = contents;
}

bool is_empty(void) {
  return top_ptr == contents;
}

bool is_full(void) {
  return top_ptr == &contents[STACK_SIZE];
}

void push(int i) {
  if (is_full())
    stack_overflow();
  else
    *top_ptr++ = i;
}
int pop(void) {
  if (is_empty()){
    stack_underflow();
  return 0;}
  else{
     return *--top_ptr;
  }
}

// helper errorfunctions;
void stack_overflow(void) {
  printf("Error: Stack overflow\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void) {
  printf("Error: Stack underflow\n");
  exit(EXIT_FAILURE);
}

int main (void) {
    // Test the stack functions
    make_empty();
    
    printf("Is empty? %s\n", is_empty() ? "Yes" : "No");  // Should be Yes
    
    for (int i = 1; i <= STACK_SIZE; i++) {
        push(i);
    }
    
    printf("Is full? %s\n", is_full() ? "Yes" : "No");  // Should be Yes
    
    // Pop all elements
    while (!is_empty()) {
        printf("%d ", pop());
    }
    printf("\n");
    
    printf("Is empty? %s\n", is_empty() ? "Yes" : "No");  // Should be Yes
    
    
  return 0;
}