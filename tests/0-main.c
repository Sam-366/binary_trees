#include <stdlib.h>
#include "../binary_trees.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    binary_trees_t *root;

    root = binary_trees_node(NULL, 98);

    root->left = binary_trees_node(root, 12);
    root->left->left = binary_trees_node(root->left, 6);
    root->left->right = binary_trees_node(root->left, 16);

    root->right = binary_trees_node(root, 402);
    root->right->left = binary_trees_node(root->right, 256);
    root->right->right = binary_trees_node(root->right, 512);

    binary_trees_print(root);
    return (0);
}
