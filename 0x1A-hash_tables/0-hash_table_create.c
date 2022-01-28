#include "hash_tables.h"
/**
 *hash_table_create -Create a hash table
 *@size: size of array
 *Return: new pointer to newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size <= 0)
	{
		return (NULL);
	}
	else
	{
		new = malloc(sizeof(hash_table_t));
		if (new == NULL)
		{
			free(new);
			return (NULL);
		}
		new->size = size;
		new->array = calloc(size, sizeof(hash_node_t));
		if (new->array == NULL)
		{
			free(new);
			return (NULL);
		}
		return (new);
	}
}
