#include "binary_trees.h"

/**
 * tree_depth - calculates depth of a tree
 * @tree: pointer to root
 * Return: depth
 */
static size_t tree_depth(const binary_tree_t *tree)
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
 * is_perfect - checks if tree is perfect
 * @tree: pointer to root
 * @depth: expected depth
 * @level: current level
 * Return: 1 if perfect, 0 otherwise
 */
static int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (!tree)
		return (1);

	/* leaf node */
	if (!tree->left && !tree->right)
		return (level + 1 == depth);

	/* internal node with only one child */
	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to root
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = tree_depth(tree);
	return (is_perfect(tree, depth, 0));
}


