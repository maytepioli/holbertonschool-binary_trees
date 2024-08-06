#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the
 * size of a binary tree
 * @tree: Pointer to the root
 *
 * Return: The size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	counter = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

	return (counter);
}
