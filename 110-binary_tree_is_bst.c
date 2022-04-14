
#include "binary_trees.h"

/**
 * bst_utility - verifies this is a bst
 * @tree: tree we are verifying
 * @max: largest node
 * @min: smallest node
 * Return: 1 for true, 0 for false
 */
int bst_utility(const binary_tree_t *tree, int min, int max)
{
if (tree == NULL)
return (1);
if (tree->n < min || tree->n > max)
return (0);
return (bst_utility(tree->left, min, tree->n - 1) &&
bst_utility(tree->right, tree->n + 1, max));
}

/**
 * binary_tree_is_bst - checks if a binary tree is binary search tree
 * @tree: tree to check
 * Return: 1 for true, 0 for false
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
return (bst_utility(tree, INT_MIN, INT_MAX));
}
