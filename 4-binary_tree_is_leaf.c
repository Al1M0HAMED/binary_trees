#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if the node is leef or not.
 * @node: is the node
 * Return: 1 if leaf otherwise 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && (!node->right && !node->left))
		return (1);
	else
		return (0);
}
