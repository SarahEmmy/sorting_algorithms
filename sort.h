#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* Comparison direction macros for bitonic sort */
#define UP 0
#define DOWN 1

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;

/* Boolean type enumeration */
typedef enum bool
{
    false = 0,
    true
} bool;

/* Creates a doubly linked list from an array of integers */
listint_t *create_listint(const int *array, size_t size);

/* Printing helper functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* ----- Sorting algorithms ----- */
void bubble_sort(int *array, size_t size);            /* Bubble Sort */
void insertion_sort_list(listint_t **list);          /* Insertion Sort (Doubly Linked List) */
void selection_sort(int *array, size_t size);        /* Selection Sort */
void quick_sort(int *array, size_t size);            /* Quick Sort (Lomuto Partition Scheme) */
void shell_sort(int *array, size_t size);            /* Shell Sort */
void cocktail_sort_list(listint_t **list);          /* Cocktail Shaker Sort (Doubly Linked List) */
void counting_sort(int *array, size_t size);         /* Counting Sort */
void merge_sort(int *array, size_t size);            /* Merge Sort */
/* Function prototypes */
void heapify(int *array, int index, size_t size);
void swap(int *a, int *b);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);            /* Radix Sort */
void bitonic_sort(int *array, size_t size);          /* Bitonic Sort */
void quick_sort_hoare(int *array, size_t size);      /* Quick Sort (Hoare Partition Scheme) */

#endif /* SORT_H */
