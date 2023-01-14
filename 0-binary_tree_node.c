#include "binary_trees.h"
/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: Pointer to the parent node of the node to create.
 * @value: Value to put in the new node.
 * Return: Pointer to the new node, or NULL on failure.
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *treeNode;

	treeNode = malloc(sizeof(binary_tree_t));

	if (treeNode == NULL)
	{
		return (NULL);
	}

	treeNode->parent = parent;
	treeNode->n = value;
	treeNode->left = NULL;
	treeNode->right = NULL;
	return (treeNode);
}
