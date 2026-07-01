#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Person.h"

#define N_PERSONAS 5

int main(void) {
    Person personas[N_PERSONAS] = {
        {"Carlos",  25, 178.50},
        {"Ana",     19, 162.30},
        {"Beatriz", 32, 170.00},
        {"David",   28, 158.75},
        {"Elena",   21, 180.20}
    };

    Person copia[N_PERSONAS];

    printf("Arreglo original:\n");
    print_people(personas, N_PERSONAS);

    // Ordenamiento por nombre (alfabetico)
    memcpy(copia, personas, sizeof(personas));
    qsort(copia, N_PERSONAS, sizeof(Person), compare_by_name);
    printf("\nOrdenado por nombre:\n");
    print_people(copia, N_PERSONAS);

    // Ordenamiento por edad (menor a mayor)
    memcpy(copia, personas, sizeof(personas));
    qsort(copia, N_PERSONAS, sizeof(Person), compare_by_age);
    printf("\nOrdenado por edad:\n");
    print_people(copia, N_PERSONAS);

    // Ordenamiento por altura (menor a mayor)
    memcpy(copia, personas, sizeof(personas));
    qsort(copia, N_PERSONAS, sizeof(Person), compare_by_height);
    printf("\nOrdenado por altura:\n");
    print_people(copia, N_PERSONAS);

    return 0;
}


