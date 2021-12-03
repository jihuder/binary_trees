#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (!node || !(node->parent))
		return (NULL);

	parent = node->parent;

	if (parent->left && (parent->left != node))
		return (parent->left);

	else if (parent->right && (parent->right != node))
		return (parent->right);

	return (NULL);
}
