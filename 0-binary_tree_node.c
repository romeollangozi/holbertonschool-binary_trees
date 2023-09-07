#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *binary_tree_node - function that creates a binary tree node
 *@parent: parent node
 *@value: value
 *Return: pointer to the parent node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;

	return (node);
}
