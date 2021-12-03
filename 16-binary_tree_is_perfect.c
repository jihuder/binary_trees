#include "binary_trees.h"

/**
 * binary_tree_height - measures the balance factor of a binary tree
 * @tree: pointer to tree
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0, rightHeight = 0;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	leftHeight = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	rightHeight = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}

/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree:  pointer to tree
 * Return: 1 if the tree is full and balanced, 0 if it isn't perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_height(tree->left) != binary_tree_height(tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if ((tree->left && tree->right) && (tree->left->parent ==
		tree->right->parent))
		return (binary_tree_is_perfect(tree->left)
			* binary_tree_is_perfect(tree->right));

	return (0);
}
