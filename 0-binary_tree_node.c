#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: Pter to parent node of node being created
 * @value: Value to be stored in new node
 *
 * Return: Ptr to the node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
