#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node to measure balanc factor
 *
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_tree = 0;
	int r_tree = 0;
	int bal_fact = 0;
	binary_tree_t *left = tree->left;
	binary_tree_t *right = tree->right;

	if (tree == NULL)
		return (0);
	while (left != NULL)
	{
		l_tree++;
		left = left->left;
	}
	while (right != NULL)
	{
		r_tree++;
		right = right->right;
	}
	bal_fact = l_tree - r_tree;
	return (bal_fact);
}
