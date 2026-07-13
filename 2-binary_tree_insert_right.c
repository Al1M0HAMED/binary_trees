#include "binary_trees.h"
/**
 * binary_tree_insert_right - is a function that just creat a right node.
 * @parent: is the parent node of the new node.
 * @value: is the new node value.
 * Return: the new node or Null if faild.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent->right)
		swap_nodes_right(parent->right, new_node);
	else
	{
		parent->right = new_node;
		new_node->parent = parent;
	}
	return (new_node);
}
/**
 * swap_nodes_right - swap the nodes.
 * @new_node: is the new node.
 * @old_node: is the old node.
 * Return: nothing
 */
void swap_nodes_right(binary_tree_t *old_node, binary_tree_t *new_node)
{
	new_node->parent = old_node->parent;
	new_node->right = old_node;
	old_node->parent->right = new_node;
	old_node->parent = new_node;
}
