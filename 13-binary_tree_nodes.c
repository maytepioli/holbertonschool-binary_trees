#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes
 * with at least 1 child in a binary tree
 * @tree: Pointer to the root of the tree
 *
 * Return: If tree is NULL must return 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1);
	}
	else
	{
		return (0);
	}
}
