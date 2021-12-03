#include "binary_trees.h"
/**
 * tree_size - size of binary tree
 * @tree: pointer to tree
 * @level: level of tree
 * @deep: deep of tree
 * Return: deep of tree
 */
size_t tree_size(const binary_tree_t *tree, size_t *level, size_t *deep)
{
	if (tree->right != NULL)
	{
		if (*level >= *deep)
			*deep += 1;
		*level += 1;
		tree_size(tree->right, level, deep);
	}

	if (tree->left != NULL)
	{
		if (*level >= *deep)
			*deep += 1;
		*level += 1;
		tree_size(tree->left, level, deep);
	}

	if (tree->left == NULL && tree->right == NULL)
		return ((*level - 1));

	return (0);

}

/**
 *  binary_tree_size - deletes an entire binary tree
 *  @tree:  pointer to a parent node
 *  Return: NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t *deep = NULL, *level = NULL, deep_t = 1, level_t = 1;

	deep = &deep_t;
	level = &level_t;

	tree_size(tree, level, deep);

	return (deep_t);
}

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

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
* @tree: pointer to binary_tree
* Return: Number of nodes with at least 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t  leaves = 0, size = 0;

	if (tree == NULL)
		return (0);

	size = binary_tree_size(tree);
	leaves = binary_tree_leaves(tree);

	return (size - leaves);

}
