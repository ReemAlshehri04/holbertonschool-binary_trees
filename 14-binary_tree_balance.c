#include "binary_trees.h"

/**
* binary_tree_balance - Measures the balance factor of a binary tree.
* @tree: Pointer to the root node of the tree to measure the balance.
*
* Return: Balance factor (difference between left and right subtree heights),
* or 0 if tree is NULL.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
    /* Calculate left subtree height */
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
    /* Calculate right subtree height */
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
    /* Return balance factor */
	return (left_height - right_height);
}
