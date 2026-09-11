#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through a binary tree using in-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Validation: if tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* 1. Traverse the left subtree */
	binary_tree_inorder(tree->left, func);

	/* 2. Visit the node (call the function with the node's value) */
	func(tree->n);

	/* 3. Traverse the right subtree */
	binary_tree_inorder(tree->right, func);
}

