#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * 
 * @n: Data of the node.
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the skip list.
*/
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;


/**
 * struct skiplist_s - Singly linked list with an express lane
 * 
 * @n: Data of the node.
 * @index: Index of the node in the list
 * @next: Pointer to the next node in the skip list.
 * @express: Pointer to the express lane node in the skip list.
 * 
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_t
{
    int n;
    size_t index;
    struct skiplist_t *next;
    struct skiplist_t *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
