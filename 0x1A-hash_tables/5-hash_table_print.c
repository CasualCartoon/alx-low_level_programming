#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;

    if (ht == NULL)
        return;

    printf("{");
    for (i = 0; i < ht->size; i++)
    {
        hash_node_t *node = ht->array[i];

        while (node != NULL)
        {
            printf("'%s': '%s'", node->key, node->value);
            if (node->next != NULL)
                printf(", ");
            node = node->next;
        }
    }
    printf("}\n");
}
