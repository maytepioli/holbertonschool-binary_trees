#include "binary_trees.h"

/**
 * binary_tree_sibling -  function that finds the sibling
 * of a node
 * @node:
 *
 * Return: pointer to the node to find the sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *siblingNode;

	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
	{
		siblingNode = node->parent->right;
	}
	else
	{
		siblingNode = node->parent->left;
	}
	return (siblingNode);
}
