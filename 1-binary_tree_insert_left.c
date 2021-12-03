#include "binary_trees.h"
/**
 *  binary_tree_insert_left - a funtion to insert a
 *  node to left side of node from binary tree
 *  @parent:  pointer to a parent node
 *  @value: value of node
 *  Return: pointer to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	/* if parent is null */
	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	parent->left = node;

	return (node);
}
