#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if the node is leef or not.
 * @node: is the node
 * Return: 1 if leaf otherwise 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node && !node->parent)
		return (1);
	else
		return (0);
}
