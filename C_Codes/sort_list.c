/*
Code to sort singly linked list.
By @alokosx
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
typedef struct list {
  int data; struct list *next;
} list;

int is_empty(const list *l) {
  return (l == NULL);
}
list *create_list(int d) {
  list *head = malloc(sizeof(list));
  head->data = d;
  head->next = NULL;
  return head;
}
list *add_to_front(int d, list *h) {
  list *head = create_list(d);
  head->next = h;
  return head;
}
void bubble_sort(list **head) {
    int swapped;
    list *ptr1;
    list *lptr = NULL;
    if (*head == NULL)
        return;
    do {
        swapped = 0;
        ptr1 = *head;
        while (ptr1->next != lptr) {
            if (ptr1->data > ptr1->next->data) {
                int temp = ptr1->data;
                ptr1->data = ptr1->next->data;
                ptr1->next->data = temp;
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    } while (swapped);
}

void print_list(list *h, char *title) {
  printf("%s\n", title);
  int count = 0;
  while(h != NULL) {
    printf("%d ", h->data);
    count++;
    if(count%20==0)
     printf("\n\n");
    h = h->next;
  }
}

int main(void) {
  list *head = NULL;
  int i;
  srand(time(0));
  for(i=0;i<100;i++)
  {
    int a;
    a = (rand()%900)+100;
    head = add_to_front(a,head);
  }
  print_list(head,"Random list:");
  bubble_sort(&head);
  print_list(head,"Sorted list:");
  return 0;
}