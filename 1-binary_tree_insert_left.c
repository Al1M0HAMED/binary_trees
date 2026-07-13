#include "binary_trees.h"
/**
 * binary_tree_insert_left - is a function that just creat a left node.
 * @parent: is the parent node of the new node.
 * @value: is the new node value.
 * Return: the new node or Null if faild.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (parent->left)
		swap_nodes(parent->left, new_node);
	else
	{
		parent->left = new_node;
		new_node->parent = parent;
	}
	return (new_node);
}
/**
 * swap_nodes - swap the nodes.
 * @new_node: is the new node.
 * @old_node: is the old node.
 * Return: nothing
 */
void swap_nodes(binary_tree_t *old_node, binary_tree_t *new_node)
{
	int temp;

	temp = new_node->n;
	new_node->n = old_node->n;
	new_node->parent = old_node->parent;
	new_node->left = old_node;
	old_node->parent->left = new_node;
	old_node->parent = new_node;
	old_node->n = temp;
}
