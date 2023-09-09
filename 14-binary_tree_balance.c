#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_left_height - function that finds the height of a binary tree
 * @tree: tree
 * Return: height of the tree where root is level 0
 */

size_t binary_tree_left_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);
	else
	{
		size_t left_side;

		left_side = binary_tree_left_height(tree->left);
			return (left_side + 1);
	}
}

/**
 * binary_tree_right_height - function that finds the height of a binary tree
 * @tree: tree
 * Return: height of the tree where root is level 0
 */

size_t binary_tree_right_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	return (0);
	else
	{
		size_t right_side;

		right_side = binary_tree_right_height(tree->right);
			return (right_side + 1);
	}
}
/**
 * binary_tree_balance - function thet finds the balance factor fo a binary
 * tree
 * @tree: tree
 * Return: number of nodes in the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		int balance;
		int leftHeight = (int) binary_tree_left_height(tree);
		int rightHeight = (int) binary_tree_right_height(tree);

		balance = leftHeight - rightHeight;
		return (balance);
	}
}
