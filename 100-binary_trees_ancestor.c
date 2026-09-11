#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: Pointer to the lowest common ancestor node, or NULL if none
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	const binary_tree_t *temp_second;

	if (!first || !second)
		return (NULL);

	/* Iterate upwards from the first node */
	while (first)
	{
		/* For every step up in the first path, reset second to its start */
		temp_second = second;
		while (temp_second)
		{
			/* If the current node in the first path matches the second path, it's the LCA */
			if (first == temp_second)
				return ((binary_tree_t *)first);
			temp_second = temp_second->parent;
		}
		first = first->parent;
	}
	return (NULL);
}

