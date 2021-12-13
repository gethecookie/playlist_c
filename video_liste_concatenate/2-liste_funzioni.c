#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


void list_insert(struct node**, int);
void list_display(struct node*);
int list_search(struct node*, int);
void list_delete(struct node**, int);



int main(){
  struct node* head = NULL;
  int nodoCercato, nodoCancellato;

  list_insert(&head, 53);
  list_insert(&head, 86);
  list_insert(&head, 17);

  list_display(head);
  list_insert(&head, 12);
  list_display(head);

  // Cerco nodo con dato 34
  nodoCercato = 86;
  if(list_search(head, nodoCercato))
    printf("\nNodo %d trovato!", nodoCercato);
  else                                 
    printf("\nNodo %d NON trovato!", nodoCercato);

  // Cerco nodo con dato 22
  nodoCercato = 90;
  if(list_search(head, nodoCercato))
    printf("\nNodo %d trovato!", nodoCercato);
  else
    printf("\nNodo %d NON trovato!\n", nodoCercato);


  // Cancello nodo con valore 86
  nodoCancellato = 86;
  printf("\nCancello nodo con dato %d", nodoCancellato);
  list_delete(&head, nodoCancellato);
  list_display(head);

  // Cancello nodo con valore 12
  nodoCancellato = 12;
  printf("\nCancello nodo con dato %d", nodoCancellato);
  list_delete(&head, nodoCancellato);
  list_display(head);

  // Cancello nodo con valore 90
  nodoCancellato = 90;
  printf("\nCancello nodo con dato %d", nodoCancellato);
  list_delete(&head, nodoCancellato);
  list_display(head);


  return 0;
}


// Funzione per inserire un nodo in testa
void list_insert(struct node** head, int new_data) {
  // Alloco memoria per il nuovo nodo e preparo i suoi campi
  struct node* nuovo = (struct node*)malloc(sizeof(struct node));
  if(nuovo == NULL){
    printf("Errore nell'allocazione della memoria!");
    exit(0);
  }

  nuovo->data = new_data; 
  nuovo->next = (*head);

  // Cambio testa della lista
  (*head) = nuovo;
}


// Funzione per stampare la lista
void list_display(struct node *p) {
  printf("\n");

  while (p != NULL) {
    printf("|%d| -> ", p->data);
    p = p->next;
  }
  printf("NULL\n");
}


// Funzione per ricerca nodo
int list_search(struct node* corrente, int ricercato) {

  while (corrente != NULL) {
    if (corrente->data == ricercato) 
      return 1;                          

    corrente = corrente->next;
  }

  // fine while
  return 0;   
}



void list_delete(struct node** head, int key){
  struct node *tmp = *head;
  struct node *prev = NULL;

  // Sto eliminando la testa
  if (tmp != NULL && tmp->data == key) {
    *head = tmp->next; // Cambio testa della lista
    free(tmp);
    return;
  }
 
  // Ricerco il nodo da eliminare, tenendo traccia del precedente (per poter modificare prev->next)
  while (tmp != NULL && tmp->data != key) {
    prev = tmp;
    tmp = tmp->next;
  }
 
  // Nessun nodo ha come "dato" la "chiave"
  if (tmp == NULL)
    return;
 
  // Modifico il next del nodo precedente a quello eliminato
  prev->next = tmp->next;
 
  free(tmp);
}

