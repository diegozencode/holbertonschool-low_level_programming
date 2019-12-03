#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node
 * @value: integer stored in the node
 * Return: pointer to the created node or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	new_node = malloc(sizeof(*new_node));
	if (!new_node || !parent)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left)
	{
		(parent->left)->parent = new_node;
		new_node->left = parent->left;
		parent->left = new_node;
	}
	else
	{
		parent->left = new_node;
	}
	return (new_node);
}
