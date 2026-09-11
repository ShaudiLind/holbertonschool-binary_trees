#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node, or NULL if no sibling or node is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* If node is NULL or node has no parent, it cannot have a sibling */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If the node is the left child, the sibling is the right child */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If the node is the right child, the sibling is the left child */
	return (node->parent->left);
}

