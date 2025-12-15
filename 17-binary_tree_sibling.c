#include "binary_trees.h"

/**
* binary_tree_sibling - Finds the sibling of a node
* @node: Pointer to the node to find the sibling
*
* Return: Pointer to the sibling node, or NULL if none
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* If node is the left child, sibling is the right child */
	if (node->parent->left == node)
		return (node->parent->right);

	/* If node is the right child, sibling is the left child */
	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
