#include <cs50.h>
#include <stdio.h>

void print_left(int spaces, int bricks);
void print_right(int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        print_left(n - 1, i);
        printf("  ");
        print_right(i);
        printf("\n");
    }
}

void print_left(int spaces, int bricks)
{
    // Print spaces
    for (int i = spaces; i > bricks; i--)
    {
        printf(" ");
    }
    // Print bricks
    for (int i = 0; i <= bricks; i++)
    {
        printf("#");
    }
}

void print_right(int bricks)
{
    for (int i = 0; i <= bricks; i++)
    {
        printf("#");
    }
}
