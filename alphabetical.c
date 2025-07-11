#include <string.h>
#include <stdio.h>

int main(void)

{

    //  Get user's input

    char text[100];

    printf("Input: ");
    scanf("%s", &text);
    // Iterate through each element in the string

    for (int i = 0; i < strlen(text); i++)
    {
        // printf("%c - %i\n ", text[i], text[i]);

        if (text[i] < text[i - 1])
        {
            printf("No\n");
            return 0;
        }

        printf("Yes\n");
    }

    // Check if it is alpabetical

    // Print out yes or no
}