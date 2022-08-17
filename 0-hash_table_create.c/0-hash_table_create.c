hash_table_t *hash_table_create(unsigned long int size)
{
	if (size == 0)
		return (NULL);
	hash_table_t *temp;
	temp = malloc(sizeof(hash_table_t));
	
	if (temp == NULL)
		return 0;

	temp->size = size;
	temp->array = calloc((size_t*)temp->size, sizeof(hash_node_t));
	if (temp->array == NULL)
		return (NUll);
	return (temp);
}
