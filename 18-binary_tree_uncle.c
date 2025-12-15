#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node, or NULL if none
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	parent = node->parent;

	/* If parent is left child, uncle is right child */
	if (parent->parent->left == parent)
		return (parent->parent->right);

	/* If parent is right child, uncle is left child */
	if (parent->parent->right == parent)
		return (parent->parent->left);

	return (NULL);
}
