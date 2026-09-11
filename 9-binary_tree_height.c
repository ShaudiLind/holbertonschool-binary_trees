#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0;
	size_t right_h = 0;

	if (tree == NULL)
		return (0);

	/* Check if the node is a leaf; if it has no children, its height is 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* Recursively get the height of left and right subtrees */
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	/* Return the larger height plus 1 for the current edge */
	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}

