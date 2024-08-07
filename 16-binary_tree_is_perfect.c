#include "binary_trees.h"
#include "15-binary_tree_is_full.c"
#include "9-binary_tree_height.c"
/**
 * binary_tree_is_perfect - function that checks if
 * a binary tree is perfect
 * @tree: Pointer to the root of the tree
 *
 * Return: 1 if is perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
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
	if (counter == counter2 && tree->left != NULL && tree->right != NULL)
	{
		return (1);
	}
	return (0);
}
