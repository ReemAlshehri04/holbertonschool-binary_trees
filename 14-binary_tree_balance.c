#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height
 */
static int height(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	return ((left > right ? left : right) + 1);
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (height(tree->left) - height(tree->right));
}
