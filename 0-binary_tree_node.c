#include "binary_trees.h"
/**
 * binary_tree_node - a funtion to create a binary node
 * @parent:  pointer to a parent node
 * @value: value of node
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	node->n = value;

	return (node);
}

