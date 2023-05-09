#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_

#include <stdio.h>
#include <stdlib.h>

/*
struct listint_s - singly linked list

@n: integer
@index: Index of the node in the list
@next: Pointer to the node

Description: singly link4ed list nodes structure for holberton project
*/
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
