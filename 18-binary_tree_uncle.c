#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_ucle -  function that finds the uncle of a node
 * @node:  pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncleNode;
	binary_tree_t *siblingNode;

	siblingNode = binary_tree_sibling(node->parent);

	uncleNode = siblingNode;
	return (uncleNode);
}
