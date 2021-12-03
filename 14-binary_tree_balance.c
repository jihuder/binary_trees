#include "binary_trees.h"

/**
 * binary_tree_height - measures the balance factor of a binary tree
 * @tree: The root relationship
 * Return: tree's height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t leftHeight, rightHeight;

	if (!tree)
		return (0);

	leftHeight = 1 + binary_tree_height(tree->left);
	rightHeight = 1 + binary_tree_height(tree->right);

	return ((leftHeight > rightHeight) ? leftHeight : rightHeight);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: The root relationship
 * Return: Balance between subtrees
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
	binary_tree_height(tree->right));
}
