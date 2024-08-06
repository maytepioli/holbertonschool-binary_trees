#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the
 * height of a binary tree
 * @tree: Pointer to the root of the binary tree
 * Return: height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter;
	size_t counter2;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		counter = 1 + binary_tree_height(tree->left);
	}
	else
	{
		counter = 0;
	}

	if (tree->right)
	{
		counter2 = 1 + binary_tree_height(tree->right);
	}
	else
	{
		counter2 = 0;
	}

	if (counter > counter2)
	{
		return (counter);
	}
		return (counter2);
}

