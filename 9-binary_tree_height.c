#include "binary_trees.h"

/**
 * binary_tree_height - count a height of a binary tree
 * @tree: input entire tree
 * Return: height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int h = 0;

	if (!tree)
		return (0);
	if (tree->left)
	{
		h++;
		binary_tree_height(tree->left);
	}
	if (tree->right)
	{
		h++;
		binary_tree_height(tree->right);
	}
	return (h);
}
