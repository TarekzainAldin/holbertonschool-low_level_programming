#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer to the head node.
 * @str: String to be added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    int i = 0;
    list_t *new_node;

    /* Count the length of the string */
    while (str[i])
        i++;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    /* Allocate memory and copy the string */
    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    /* Assign the length and set the next pointer */
    new_node->len = i;
    new_node->next = *head;

    /* Update the head pointer to point to the new node */
    *head = new_node;

    return (new_node);
}
