#include "binary_trees.h"
/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: pointer to binary tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	leaves += binary_tree_leaves(tree->left);
	leaves += binary_tree_leaves(tree->right);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	return (leaves);
}
