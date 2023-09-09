#include "binary_trees.h"
/**
 * binary_tree_leaves - function that finds the
 * number of leaves in a binary tree
 * @tree: tree
 * Return: size of the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

		size_t leaves;

		leaves = binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
		return (leaves);
}
