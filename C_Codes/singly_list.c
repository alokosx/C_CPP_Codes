/*
Code to make a singly linked list.
By @alokosx
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

typedef struct list {
  int data; struct list *next;
} list;

int is_empty(const list *l) {
  return (l == NULL);
}
list* create_list(int d) {
  list* head = malloc(sizeof(list));
  head->data = d;
  head->next = NULL;
  return head;
}
list* add_to_front(int d, list *h) {
  list* head = create_list(d);
  head->next = h;
  return head;
}
list *array_to_list(int d[], int size) {
  list *head = create_list(d[0]);
  for(int i = 1; i < size; i++) {
    head = add_to_front(d[i], head);
  }
  return head;
}
void print_list(list *h, char *title) {
  printf("%s\n", title);
  while(h != NULL) {
  printf("%d :", h->data);
  h = h->next;
  }
}

int main(void) {
  list list_of_int;
  list* head = NULL;
  int n;
  printf("Enter number of nodes in list:");
  scanf("%d",&n);
  int a[n];
  printf("Enter %d integers:\n\n",n);
  for(int i=0;i<n;i++)
   scanf("%d",&a[i]);
  head = array_to_list(a,n);
  print_list(head, "Singly linked list:");
  printf("\n\n");
  return 0;
}