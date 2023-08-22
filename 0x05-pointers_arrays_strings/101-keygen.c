#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int sum = 0;
    char password[84];
    int i, random;

    srand(time(NULL));

    for (i = 0; i < 10; i++)
    {
        random = rand() % 10 + 48; // ASCII digits
        password[i] = random;
        sum += random;
    }

    password[i] = (sum - 997) % 10 + 48; // Last digit

    for (i = 0; i < 10; i++)
    {
        random = rand() % 26 + 65; // ASCII uppercase letters
        password[11 + i] = random;
    }

    password[21] = '\0'; // Null-terminate the password

    printf("%s\n", password);

    return 0;
}
