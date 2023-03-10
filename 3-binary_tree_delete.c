#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes and frees a tree
 * @tree: Pointer to trees' root
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* if tree exists */
	if (tree)
	{
		/* delete left and right*/
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
