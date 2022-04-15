#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a new node in the binary tree
 * @parent: pointer to parent
 * @value: n for the new node
 *
 * Return: pointer to new node, or NULL on fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new;

new = malloc(sizeof(binary_tree_t));
if (new == NULL)
return (NULL);

new->n = value;
new->parent = parent;
new->left = NULL;
new->right = NULL;
return (new);
}