#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>


// int main()
// {

// typedef struct node
// {
//     int number;
//     struct node *next;
// }
// node;
// }

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
}
