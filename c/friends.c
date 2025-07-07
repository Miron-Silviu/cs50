
#include <stdio.h>

int main(void)

{
    char fullName[100];
    char address[100];
    char phoneNumber[100];
    char homeTown[100];

    printf("What is your full name: ");
    scanf(" %[^\n]", fullName);

    printf("Where is you address: ");
    scanf(" %[^\n]", address);

    printf("What is you phone number: ");
    scanf(" %[^\n]", &phoneNumber);

    printf("Where is you home town: ");
    scanf(" %[^\n]", homeTown);

    printf("\n");
    printf("---Collected Info---\n");
    printf("Full Name : %s \n", fullName);
    printf("Address : %s\n", address);
    printf("Phone Number : %s\n", phoneNumber);
    printf("Home Town : %s\n", homeTown);
}