#include "binary_trees.h"
/**
 * binary_tree_nodes - function that finds the
 * number of nodes in a binary tree
 * @tree: tree
 * Return: number of nodes in the tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		size_t nodes;

		nodes = binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
		if (tree->left != NULL || tree->right != NULL)
			return (nodes + 1);
		else
			return (0);
	}
}
