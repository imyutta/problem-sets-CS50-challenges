#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>


typedef struct node
{
    int number;
    struct node *left;
    struct node *right;
}
node;

int main()
{
    node *tree = NULL;

    node *n = malloc(sizeof(node));
    if (n == NULL);
    {
    return 1;
    }
    n->number = 2;
    n->left = NULL;
    n->right = NULL;
    tree = n;

}
