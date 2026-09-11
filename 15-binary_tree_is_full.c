#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if full, 0 otherwise. If tree is NULL, return 0.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If leaf node, it is considered full */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both children exist, recursively check if both subtrees are full */
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* If one child exists and the other doesn't, it is not full */
	return (0);
}

