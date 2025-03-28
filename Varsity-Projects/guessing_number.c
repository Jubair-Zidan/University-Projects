#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomnumber, guessed_number, guessed_count;

    srand(time(0));

    // range 1-50

    printf("Initial Level\n");

    for (int i = 0; i <= randomnumber; i++)
    {

        while (1)
        {
            randomnumber = rand() % 50 + 1;
            printf("%d\n", randomnumber);
            guessed_count = 0;

            printf("\n\t\t\t\t\t\t\t\t````Counting has started!!````\n\t\t\t\t\t\t\t\tTry to guess the exact number...\n");

            while (guessed_number != randomnumber)
            {
                if (guessed_count >= 5)
                {
                    printf("Warning!!\nYou have exceeded the maximum count\n");
                    break;
                }

                printf("Enter Your guessed number: ");
                scanf("%d", &guessed_number);

                if (guessed_number < randomnumber)
                {
                    printf("guess higher number\n");
                }
                else if (guessed_number > randomnumber)
                {
                    printf("guess lower number\n");
                }

                guessed_count++;
            }
            if (guessed_number == randomnumber)
            {
                printf("Congrates!!!\nYou have completed Level-1\n");
                printf("You have guessed correct number after %d times\n\n", guessed_count);
            }
            break;
        }

        if (guessed_count <= 5 && guessed_number == randomnumber)
        {
            break;
        }
    }

    printf("\n\n");

    // range 50-100

    printf("Level-2\n");

    for (int i = 0; i <= randomnumber; i++)
    {
        while (2)
        {
            int max = 100, min = 50;
            randomnumber = rand() % (max - min + 1) + min;
            guessed_count = 0;
            printf("%d", randomnumber);

            printf("\n\t\t\t\t\t\t\t\t````Counting has started!!````\n\t\t\t\t\t\t\t\tTry to guess the exact number...\n");

            while (guessed_number != randomnumber)
            {
                if (guessed_count >= 5)
                {
                    printf("Game over!!\nYou have exceeded the maximum count\n");
                    break;
                }

                printf("Enter Your guessed number: ");
                scanf("%d", &guessed_number);

                if (guessed_number < randomnumber)
                {
                    printf("guess higher number\n");
                }
                else if (guessed_number > randomnumber)
                {
                    printf("guess lower number\n");
                }

                guessed_count++;
            }
            if (guessed_number == randomnumber)
            {
                printf("Congrates!!!\nYou completed Level-2\n");
                printf("You have guessed correct number after %d times", guessed_count);
                break;
            }
        }

        if (guessed_count <= 5 && guessed_number == randomnumber)
        {
            break;
        }
    }

    printf("\n\n");

    // range 100-200

    printf("Final Level\n");

    for (int i = 0; i <= randomnumber; i++)
    {
        while (3)
        {
            int max = 200, min = 100;
            randomnumber = rand() % (max - min + 1) + min;
            guessed_count = 0;
            printf("%d", randomnumber);

            printf("\n\t\t\t\t\t\t\t\t````Counting has started!!````\n\t\t\t\t\t\t\t\tTry to guess the exact number...\n");

            while (guessed_number != randomnumber)
            {
                if (guessed_count >= 5)
                {
                    printf("Game over!!\nYou have exceeded the maximum count\n");
                    break;
                }

                printf("Enter Your guessed number: ");
                scanf("%d", &guessed_number);

                if (guessed_number < randomnumber)
                {
                    printf("guess higher number\n");
                }
                else if (guessed_number > randomnumber)
                {
                    printf("guess lower number\n");
                }

                guessed_count++;
            }
            if (guessed_number == randomnumber)
            {
                printf("Congrates!!!\nYou completed Level-2\n");
                printf("You have guessed correct number after %d times\n\n", guessed_count);
                break;
            }
        }

        if (guessed_count <= 5 && guessed_number == randomnumber)
        {
            break;
            printf("\n\n");
        }
    }
    printf("\t\t\t\t\t\t\t\t````Chudserehhhhhhhh!!!!!!!````");
    return 0;
}