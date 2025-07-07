
#include <stdio.h>

void print_row(int bricks)

{

    for (int i = 0; i < bricks; i++)
    {

        for (int j = 0; j < i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

int main(void)

{
    int height;
    printf("Enter the piramid height:  ");
    scanf("%d", &height);
    print_row(height);
}
