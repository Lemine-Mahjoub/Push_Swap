#ifndef LIB_H
#define LIB_H

typedef struct s_stack {
    int data;
    int size;
    struct s_stack *next;
} s_stack;

#endif