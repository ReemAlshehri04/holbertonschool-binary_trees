#include "binary_trees.h"
#include <stdlib.h> /* For NULL definition */

/**
 * binary_tree_postorder - Goes through a binary tree
 *                         using post-order traversal
 *
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node.
 *        The value in the node must be passed as a parameter to this function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;

	binary_tree_postorder(tree->left, func); /* Traverse left subtree */
	binary_tree_postorder(tree->right, func); /* Traverse right subtree */
	func(tree->n); /* Process current node */
}
