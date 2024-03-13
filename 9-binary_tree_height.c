#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of the tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	while (tree != NULL)
	{
		tree = tree->right;
		count++;
	}
	return (count - 1);
}
