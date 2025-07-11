#include <stdio.h>

int const size = 5;
int main(void)
{
    // Declare an array

    int numbers[5];
    // Populate an array
    numbers[0] = 1;
    for (int i = 1; i < size; i++)
    {
        numbers[i] = numbers[i - 1] * 2;
    }

    // int numbers[5] = {1,2,4,8,6};

    // Print out the value one by one

    for (int i = 0; i < size; i++)

    {
        printf("%i\n", numbers[i]);
    }
}