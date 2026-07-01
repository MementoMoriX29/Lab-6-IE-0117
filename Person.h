#ifndef PERSON_H
#define PERSON_H

typedef struct {
    char   name[50];
    int    age;
    double height;
} Person;

// Funciones de comparacion para qsort (via function pointers)
int compare_by_name(const void *a, const void *b);
int compare_by_age(const void *a, const void *b);
int compare_by_height(const void *a, const void *b);

// Utilidad para imprimir el arreglo
void print_people(const Person people[], int n);

#endif // PERSON_H
