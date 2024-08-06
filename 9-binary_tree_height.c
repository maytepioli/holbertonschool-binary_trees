#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the
 * height of a binary tree
 * @tree: Pointer to the root of the binary tree
 * Return: height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	while (tree != NULL)
	{
		tree = tree->left;
		counter++;
	}

	while (tree != NULL)
	{
		tree = tree->right;
		counter++;
	}

	return (counter);
}
