#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - function that prints a minimum number of coins
 * @argc: number of args supplied to program
 * @argv: array of pointers to the args
 * Return: -1 or 0
 */
int main(int argc, char *argv[])
{
        int cents, coins = 0;

        if (argc != 2)
        {
                printf("Error\n");
                return (1);
        }

        cents = atoi(argv[1]);

        while (cents > 0)
        {
                coins++;
                if ((cents - 25) >= 0)
                {
 cents -= 25;
                        continue;
                }
                if ((cents - 10) >= 0)
                {
                        cents -= 10;
                        continue;
                }
                if ((cents - 5) >= 0)
                {
                        cents -= 5;
                        continue;
                }
                if ((cents - 2) >= 0)
                {
                        cents -= 2;
                        continue;
                }
                cents--;
        }

        printf("%d\n", coins);

        return (0);
}

