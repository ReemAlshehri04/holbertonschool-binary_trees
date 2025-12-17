# C - Binary Trees
## Index

- [Description](#description)
- [Learning Objectives](#learning-objectives)
- [Requirements](#requirements)
- [Data Structures](#data-structures)
- [Files](#files)
    - [Core Files](#core-files)
    - [Test Files](#test-files)
- [Traversal Functions](#traversal-functions)
- [Compilation](#compilation)
- [Author](#author)

---
## Description
This project focuses on the implementation and understanding of **binary trees** in C.
It covers the creation of binary tree nodes, traversal methods, and various operations
used to analyze tree structure such as height, depth, balance, and completeness.
The project strengthens the use of **recursion**, **pointers**, and **data structures**.

---

## Learning Objectives
By completing this project, I learned:
- What a binary tree is
- The difference between a binary tree and a Binary Search Tree (BST)
- How to traverse a binary tree (preorder, inorder, postorder)
- How to measure height, depth, size, and balance of a tree
- How to determine tree properties (leaf, root, full, perfect)
- How to work with tree relationships (siblings and uncles)
- How to use recursion to solve tree-based problems

---

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All files compiled on **Ubuntu 20.04 LTS**
- Compilation using:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

- No global variables
- No more than 5 functions per file
- Betty style and documentation applied
- All header files are include-guarded

---

## Data Structures

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;
```

---
## Files
### Core Files

| **File**                   | **Description**                                           |
| -------------------------- | --------------------------------------------------------- |
| binary_trees.h             | Header file containing structures and function prototypes |
| binary_tree_print.c        | Prints a binary tree in a visual format                   |
| binary_tree_insert_left.c  | Inserts a node as the left child                          |
| binary_tree_insert_right.c | Inserts a node as the right child                         |
| binary_tree_delete.c       | Deletes an entire binary tree                             |
| binary_tree_height.c       | Measures the height of a binary tree                      |
| binary_tree_depth.c        | Measures the depth of a node                              |
| binary_tree_balance.c      | Calculates the balance factor of a tree                   |
| binary_tree_is_leaf.c      | Checks if a node is a leaf                                |
| binary_tree_is_root.c      | Checks if a node is a root                                |
| binary_tree_size.c         | Measures the size of a binary tree                        |
| binary_tree_leaves.c       | Counts the number of leaves                               |
| binary_tree_nodes.c        | Counts nodes with at least one child                      |
| binary_tree_is_full.c      | Checks if a binary tree is full                           |
| binary_tree_is_perfect.c   | Checks if a binary tree is perfect                        |
| binary_tree_sibling.c      | Finds the sibling of a node                               |
| binary_tree_uncle.c        | Finds the uncle of a node                                 |
### Test Files

This repository contains several main.c and helper test files that were used for local testing and debugging. These files are not part of the core project implementation and are provided only for validation purposes.

---
## Traversal Functions

The project implements the following traversal methods:
```
holbertonschool-binary_trees/
│
├── binary_tree_preorder.c      # Preorder traversal 
├── binary_tree_inorder.c       # Inorder traversal
└── binary_tree_postorder.c     # Postorder traversal
```


---

## Compilation

To compile all source files:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_tree
```

---

## Authors

- Badriah Barakat Almalki
- Reem Abdulhadi Alshehri

**This project is part of the Holberton School curriculum**