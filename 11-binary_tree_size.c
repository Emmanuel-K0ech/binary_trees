#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of the binary tree(number of nodes)
 * @tree: pointer to the root node
 *
 * Return: size of tree or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);
	count++;
	return (count);
}
