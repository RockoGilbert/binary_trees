#include  <stddef.h>
#include "binary_trees.h"
/**
 * bst_insert - inserts a node into a binary search tree
 * @tree: double pointer to the root node of the tree to insert into
 * @value: value to insert into the tree
 * @size_t:
 * @binary_tree_node: node to left or right side
 * Return: pointer to the new node or 0 if it fails
 */

bst_t *bst_insert(bst_t **tree, int value)
{
bst_t *new_node;
bst_t *current;
bst_t *parent;
 
new_node = malloc(sizeof(bst_t));
if (new_node == NULL)
return (NULL);
new_node->n = value;
new_node->left = NULL;
new_node->right = NULL;
if (*tree == NULL)
{
*tree = new_node;
return (new_node);
}
current = *tree;
parent = NULL;
while (current != NULL)
{
parent = current;
if (value < current->n)
    current = current->left;
else
    current = current->right;
}
if (value < parent->n)
    parent->left = new_node;
    else
    parent->right = new_node;
    return (new_node);
}
