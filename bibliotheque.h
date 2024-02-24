
#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

typedef struct {
    int data;
    int size;
    stack next;
} stack;


int is_sorted(stack list);

#endif /* BIBLIOTHEQUE_H */
