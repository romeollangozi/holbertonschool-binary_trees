#include "binary_trees.h"
#include <stdio.h>

/**
* binary_tree_is_root - function that checks if a node is a root
* @node: node to be checked
* Return: 0 if its not a root and 1 if it is
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
