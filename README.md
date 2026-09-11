Binary Tree

This proyect is a collection of C functions to manipulate binary trees, binary search trees (BST),
and AVL trees. It explores the implementation of varios data stuctures and algorithms related to
tree traversal, insertion, deletion and property calculation.

Requirements:
All files are compiled on Ubuntu 20.04 LTS using gcc, with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
Code follows the Betty style for C.
No global variables are allowed.

Data Structures: 
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

Compilation:
To compile your code, use the following command structure: gcc -Wall -Wextra -Werror -pedantic -std=gnu89 
[your_file.c] [helper_file.c] -o [output_name]
