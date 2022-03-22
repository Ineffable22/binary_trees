#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree->left)
		return (1 + binary_tree_height(tree->left));
	if (tree->right)
		return (1 + binary_tree_height(tree->right));
	return (0);
}
