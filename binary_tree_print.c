#include "binary_trees.h"

/* Original code from http://stackoverflow.com/a/13755911/2732649 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_t - Stores recursively each level in an array of strings
 *
 * @tree: Pointer to the node
 * @offset: Offset to print
 * @depth: Depth of the node
 * @s: Buffer
 *
 * Return: Length of printed tree after process
 */
static int print_t(const binary_tree_t *tree, int offset, int depth, char **s)
{
    char b[6];
    int width, left, right, is_left, i;

    if (!tree)
        return (0);
    is_left = (tree->parent && tree->parent->left == tree);
    width = sprintf(b, "(%03d)", tree->n);
    left = print_t(tree->left, offset, depth + 1, s);
    right = print_t(tree->right, offset + left + width, depth + 1, s);

    for (i = 0; i < width; i++)
        s[depth][offset + left + i] = b[i];

    if (depth && is_left)
    {
        for (i = 0; i < width + right; i++)
            s[depth - 1][offset + left + width / 2 + i] = '-';
        s[depth - 1][offset + left + width / 2] = '+';
    }
    else if (depth && !is_left)
    {
        for (i = 0; i < left + width; i++)
            s[depth - 1][offset - width / 2 + i] = '-';
        s[depth - 1][offset + left + width / 2] = '+';
    }

    return (left + width + right);
}

/**
 * _height - Measures the height of a binary tree
 *
 * @tree: Pointer to the node
 *
 * Return: Height of the tree
 */
static size_t _height(const binary_tree_t *tree)
{
    size_t height_l;
    size_t height_r;

    height_l = tree->left ? 1 + _height(tree->left) : 0;
    height_r = tree->right ? 1 + _height(tree->right) : 0;
    return (height_l > height_r ? height_l : height_r);
}

/**
 * binary_tree_print - Prints a binary tree
 *
 * @tree: Pointer to the root node
 */
void binary_tree_print(const binary_tree_t *tree)
{
    char **s;
    size_t height, i, j;

    if (!tree)
        return;

    height = _height(tree);
    s = malloc(sizeof(*s) * (height + 1));
    if (!s)
        return;

    for (i = 0; i < height + 1; i++)
    {
        s[i] = malloc(sizeof(**s) * 255);
        if (!s[i])
            return;
        memset(s[i], ' ', 255);
    }

    print_t(tree, 0, 0, s);

    for (i = 0; i < height + 1; i++)
    {
        for (j = 0; j < 255; j++)
            putchar(s[i][j]);
        putchar('\n');
        free(s[i]);
    }
    free(s);
}

