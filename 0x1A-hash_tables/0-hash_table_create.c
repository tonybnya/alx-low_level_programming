#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: the size of the hash table
 *
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
        unsigned long int i;
        hash_table_t *ht;

        /* ht = (hash_table_t*) malloc(sizeof(hash_table_t)); */
        ht = malloc(sizeof(hash_table_t));
        ht->size = size;
        ht->array = calloc(ht->size, sizeof(hash_node_t));

        for (i = 0; i < ht->size; i++)
                ht->array[i] = NULL;

        return (ht);
}
