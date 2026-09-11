#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a given node is a root
 * @node: A pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0.
 *         If node is NULL, return 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* If the node is NULL, it cannot be a root */
	if (node == NULL)
		return (0);

	/* A node is a root if it has no parent */
	if (node->parent == NULL)
		return (1);

	/* Otherwise, it is not a root */
	return (0);
}

