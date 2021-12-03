#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to binary tree
 * Return: number of leaves
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int full = 1;

	if (!tree)
		return (0);

	if (tree->left && !(tree->right))
		return (0);

	if (!(tree->left) && tree->right)
		return (0);

	if (tree->left)
		full *= binary_tree_is_full(tree->left);
	if (tree->right)
		full *= binary_tree_is_full(tree->right);

	return (full);
}
