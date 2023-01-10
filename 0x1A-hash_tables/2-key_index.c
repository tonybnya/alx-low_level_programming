#include "hash_tables.h"

/**
 * key_index - Function to get the index of a key
 * @key: the given key
 * @size: size of the arrar of the hash table
 *
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
        unsigned long int index;

        index = 0;
        while (*key)
        {
                index += *key;
                key++;
        }

        return (index % size);
}
