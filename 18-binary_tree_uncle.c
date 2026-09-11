#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* 
	 * To have an uncle, the node must exist, 
	 * the parent must exist, and the grandparent must exist. 
	 */
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	/* 
	 * The uncle is the sibling of the parent. 
	 * Check if the parent is the left child of the grandparent.
	 */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	/* Otherwise, the parent is the right child, so return the left child */
	return (node->parent->parent->left);
}

