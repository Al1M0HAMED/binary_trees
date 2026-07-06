#include "binary_trees.h"
/**
 * binary_tree_node - is a function that just creat a node.
 * @parent: is the parent node of the new node.
 * @value: is the new node value.
 * Return: the new node or Null if faild.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	if (parent)
	{
		new_node->parent = parent;
	}
	else
		parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
