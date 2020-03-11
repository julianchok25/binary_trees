#include "binary_trees.h"

/**
 * binary_tree_height - count a height of a binary tree
 * @tree: input entire tree
 * Return: height of a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int d = 0;

	if (!tree)
		return (0);
	if (tree->parent)
	{
		d += binary_tree_depth(tree->parent);
		d++;
	}
	return (d);
}
