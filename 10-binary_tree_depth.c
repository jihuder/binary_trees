#include "binary_trees.h"
/**
 *  binary_tree_depth -  measures the depth of a node in a binary tree
 *  @tree: position at the node
 *  Return: level of the position at the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t nivel = 0;

	while (tree != NULL)
	{
		if (tree->parent != NULL)
			nivel += 1;
		tree = tree->parent;
	}
	return (nivel);
}
