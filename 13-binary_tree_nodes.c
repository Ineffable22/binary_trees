#include "binary_trees.h"


size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	if (tree->left)
		return (1 + binary_tree_nodes(tree->left));
	if (tree->right)
		return (1 + binary_tree_nodes(tree->right));
	return (1);
}
