#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: If node is NULL, return 0. If node is a leaf return 1.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->right == NULL && node->left == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * binary_tree_leaves - function that count the leaves
 * of the tree
 * @tree: Pointer to the root
 *
 * Return: The number of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right) + binary_tree_is_leaf(tree));
}
