#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "12-binary_tree_leaves.c"

/**
 * _pow_recursion - function that returns the value of
 * x raised to the power of y
 * @x: number base
 * @y: power of x
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (-1);
}

/**
 * binary_tree_is_perfect - function that checks if
 * a binary tree is perfect
 * @tree: Pointer to the root of the tree
 *
 * Return: 1 if is perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int n = binary_tree_height(tree);
	int perfect = _pow_recursion(2, n);
	int leaves = binary_tree_leaves(tree);

	if (perfect == leaves)
		return (1);

	return (0);
}
