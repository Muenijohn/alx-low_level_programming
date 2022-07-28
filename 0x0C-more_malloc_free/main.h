#ifndef _MAIN_H
#define _MAIN_H

#define END '\0'

#define EMPTY ""

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b);

/**
 * string_nconcat - allocates memory using malloc
 * @s1: string
 * @s2: string
 * @n: length of string
 *
 * Return: pointer to memory location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n);

#endif
