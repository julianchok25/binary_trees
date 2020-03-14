#include "binary_trees.h"

/**
 * _pow - raises base to the power of exp
 * @base: base number
 * @exp: power to be raised to of base number
 * Return: math answer
 */
long int _pow(int base, int exp)
{
	int up;
	long int res;

	res = base;
	for (up = 0; up < exp; up++)
		res *= base;
	return (res);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to root node of the tree to check
 * Return: 1 if tree is perfect,
 * otherwise, function return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	unsigned int height = 0;
	unsigned int num_nodes = 0;

	if (!tree)
		return (0);
	if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	height = binary_tree_height(tree);
	num_nodes = binary_tree_size(tree);
	if (num_nodes == _pow(2, height) - 1)
		return (1);
	else
		return (0);
}
