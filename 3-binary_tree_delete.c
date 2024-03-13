#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - deletes entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Return: void, if tree is NULL do nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/* Recursive function */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	/* Free node passed as argument */
	free(tree);
}
