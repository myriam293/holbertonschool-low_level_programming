#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - A function that returns a pointer
 * to a newly allocated space in memory, which contains
 * a copy of the string given as a parameter.
 *
 * @str: n input pointer of the string to copy
 *
 * Return: A pointer to new string or NULL if it str is NULL
 */

char *_strdup(char *str)
{
    char *new_str, *start;
    int a = 0, length = 0;

    if (str == NULL)
        return (NULL);

    start = str;

    while (*str)
    {
        length++;
        str++;
    }

    str = start;
    new_str = malloc(sizeof(char) * (length + 1));
    start = new_str;

    if (new_str != NULL)
    {
        for (; a < length; a++)
        {
            new_str[a] = *str;
            str++;
        }
        new_str[a] = '\0';
        return (start);
    }
    else
        return (NULL);
}
