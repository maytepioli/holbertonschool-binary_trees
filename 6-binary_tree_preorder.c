#include "binary_trees.h"

/**
 * binary_tree_preorder - function that goes through
 * a binary tree using pre-order traversal
 * @tree: Pointer to the root of the binary tree
 * @func: Pointer to a function for call to each node
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
