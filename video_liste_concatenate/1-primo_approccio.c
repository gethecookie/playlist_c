#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};


void printList(struct node *);


int main() {
// Inizializzo i nodi
    struct node *testa;
    struct node *nodo1 = NULL;
    struct node *nodo2 = NULL;
    struct node *nodo3 = NULL;

// Alloco la memoria
    nodo1 = malloc(sizeof(struct node));    // Controllare allocazione...
    nodo2 = malloc(sizeof(struct node));    // Controllare allocazione...
    nodo3 = malloc(sizeof(struct node));    // Controllare allocazione...

// Assegno i valori
    nodo1->data = 17;
    nodo2->data = 86;
    nodo3->data = 53;

// Collego tra loro i nodi
    nodo1->next = nodo2;
    nodo2->next = nodo3;
    nodo3->next = NULL;

// Salvo indirizzo primo nodo come inizio della lista
    testa = nodo1;

// Stampo lista
    printLinkedlist(testa);

    return 0;
}


// Funzione per stampare la lista
void printList(struct node *p) {
  while (p != NULL) {

    if(p->next != NULL)
      printf("|%d| -> ", p->data);
    else
      printf("|%d|", p->data);

    p = p->next;
  }
}
