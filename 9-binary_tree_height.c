#include "binary_trees.h"
/**
 * binary_tree_height - count the height of tree
 * @tree: the tree to test
 * Return: the height of tree from the node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t right_size = 0, left_size = 0;

		if (tree->left)
		{
			left_size = 1 + binary_tree_height(tree->left);
		}
		else 
		{
			left_size = 0;
		}

		if (tree->right)
		{
			right_size = 1 + binary_tree_height(tree->right);
		}
		else 
		{
			right_size = 0;
		}
		if (left_size > right_size){
			return (left_size);
		}
		if (right_size > left_size){
			return (right_size);
		}

	}
	return (0);
}
