#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth of a node in a binary tree
 * @tree: pointer to tree of node to measure
 *
 * Return: depth of node of 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);
	while (tree != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth - 1);
}
