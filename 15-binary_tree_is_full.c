#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a
 * binary tree is full
 * @tree: Pointer to the root of the tree
 *
 * Return: 1 is the tree is full or 0 is not is full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->right != NULL && tree->left == NULL) ||
			(tree->right == NULL && tree->left != NULL))
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	return (binary_tree_is_full(tree->right) && binary_tree_is_full(tree->left));
}
