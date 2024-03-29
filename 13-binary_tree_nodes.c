#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes with atleas 1 child in the tree
 * @tree: pointer to the root node of the tree
 *
 * Return: number of nodes of 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		count++;
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);
	return (count);
}
