#include "binary_trees.h"

/**
 *binary_tree_insert_right - function that inserts a
 *node as the right-child of another
 *@parent: pointer to the node parent
 *@value: value to add to the new node
 *
 * Return: A pointer to the new node or NULL if it
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	newNode->right = NULL;
	newNode->left = NULL;
	newNode->n = value;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		newNode->right->parent = newNode;
	}

	parent->right = newNode;

	return (newNode);
}
