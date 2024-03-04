#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_node - created a binary tree node
 * @parent: pointer to parent of node
 * @value: data of the node
 *
 * Return: pointer to the node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);
	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;
	return (temp);
}
