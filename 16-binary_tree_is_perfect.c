#include "binary_trees.h"

/**
 * get_depth - Gets the depth of the leftmost leaf
 * @tree: Pointer to the node to measure
 * Return: The depth
 */
size_t get_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect_recursive - Recursively checks if the tree is perfect
 * @tree: Pointer to the node to check
 * @depth: The depth of the leaf nodes
 * @level: The current level
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect_recursive(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (tree == NULL)
		return (1);

	/* Check if leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	/* If internal node has only one child, it's not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Recursively check both subtrees */
	return (is_perfect_recursive(tree->left, depth, level + 1) &&
			is_perfect_recursive(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (tree == NULL)
		return (0);

	depth = get_depth(tree);
	return (is_perfect_recursive(tree, depth, 0));
}

