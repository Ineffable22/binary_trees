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

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a pointer to the root node of the tree to measure
 * the balance factor
 *
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (!tree)
		return (0);
	left  = tree->left ? (int)binary_tree_height(tree->left) : -1;
	right = tree->right ? (int)binary_tree_height(tree->right) : -1;
	return (left - right);
}