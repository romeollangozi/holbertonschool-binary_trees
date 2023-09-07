#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_preorder - function that goes through a binary tree using
 * pre-order traversal
 * @tree: pointer to the root node
 * @func: function to be appliad to all nodes traversed
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree != NULL)
		func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
