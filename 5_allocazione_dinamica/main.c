#include <stdio.h>
#include <stdlib.h>

void printArray(int a[], int dim);


int main() {

/* 1) Array statici: memorizzati nello Stack */
    int a[] = {1, 2, 3, 4, 5 };
    int dimA = 5;

    printf("Array statico di %d elementi:", dimA);
    printArray(a, dimA);


/* 2) Array dinamici */

    int numElem = 10;

    /* MALLOC  ➝ malloc(numByte); */
    int *p1;
    p1 = (int*) malloc(numElem * sizeof(int));

    if(p1 == NULL)
        printf("Errore durante l'allocazione di memoria con malloc");

    for(int i=0; i<numElem; i++)
        p1[i] = i;

    printf("Array dinamico (allocato con malloc) di %d elementi:", numElem);
    printArray(p1,numElem);

    /* CALLOC  ➝ calloc(numElem, dimSingolo); */
    p1 = (int*) calloc(numElem, sizeof(int));

    if(p1 == NULL)
        printf("Errore durante l'allocazione di memoria con calloc");

    for(int i=0; i<numElem; i++)
        p1[i] = i;

    printf("Array dinamico (allocato con calloc) di %d elementi:", numElem);
    printArray(p1,numElem);

    /* REALLOC  ➝ realloc(arrDinamico, newNumByte); */
    numElem = 12;
    p1 = realloc(p1, numElem * sizeof(int));  //numElementi aumenta di 2

    for(int i=0; i<numElem; i++)
        p1[i] = i;

    printf("Array dinamico di %d elementi:", numElem);
    printArray(p1,numElem);


    numElem = 8;
    p1 = realloc(p1, (numElem) * sizeof(int));

    for(int i=0; i<numElem; i++)
        p1[i] = i;

    printf("Array dinamico di %d elementi:", numElem);
    printArray(p1,numElem);

    /* FREE  ➝ free(puntatore); */
    free(p1);



/* 3) Array a lunghezza variabile */
    int size;
    printf("Array a Lunghezza Variabile, dimensione: ");
    scanf("%d", &size);

    int b[size];

    //Metto dei valori nell'array
    for(int i=0; i<size; i++)
        b[i] = i;

    printf("Array statico di %d elementi (dichiarati run-time):", size);
    printArray(b, size);

    return 0;
}



void printArray(int a[], int dim){
    printf("\n\t[ ");

    for (int i = 0; i < dim; ++i)
        printf("%d ",a[i]);

    printf("] \n\n");
}