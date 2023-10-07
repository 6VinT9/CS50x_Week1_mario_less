#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("What is the Size?: ");
     //   printf("The size should be > 0 than and < than 8\n");
    }
    while (n < 1 || n > 8);

    // Print grid of bricks
    for(int i = 0; i < n; i++) // loop for height
    {
        for(int j = 0; j < n-1-i; j++) // loop for spaces on left pyramid
        {
            printf(" ");
        }

        for(int j = 0; j < i+1; j++) // loop for hashes on left piramid
        {
            printf("#");
        }

        printf("\n");
    }
}

