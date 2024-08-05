#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a
 * node as the left-child of another node
 * @parent: Pointer to the node parent
 * @value: Value to add to the new node
 *
 * Return: A pointer to the new node or NULL if it
 * failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;


	if (parent == NULL)
	{
		return (NULL);
	}

	newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

		newNode->parent = parent;
		newNode->left = NULL;
		newNode->right = NULL;
		newNode->n = value;

	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		newNode->left->parent = newNode;
	}
	parent->left = newNode;
	return (newNode);
}
