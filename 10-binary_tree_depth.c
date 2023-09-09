#include "binary_trees.h"
/**
 * binary_tree_depth - function that finds the depth of a binary tree
 * @tree: tree
 * Return: depth of the tree where root is level 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->parent == NULL))
	return (0);
	else
	{
		size_t depth = binary_tree_depth(tree->parent);

		return (depth + 1);
	}
}
