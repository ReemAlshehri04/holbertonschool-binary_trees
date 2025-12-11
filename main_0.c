#include "binary_trees.h"
#include <stdio.h>

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

void print_value(int n)
{
    printf("%d\n", n);
}

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 1);
    root->left = binary_tree_node(root, 2);
    root->right = binary_tree_node(root, 3);

    binary_tree_preorder(root, print_value);

    return (0);
}
