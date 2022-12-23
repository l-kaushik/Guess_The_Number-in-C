#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int i = 0, com, input, turn = 0, check = 1;
	srand(time(NULL));
	com = (int)rand() % 100;
	while (i != 1)
	{
		turn++;
		printf("press 1234 to exti\nGuess the computer's number:- ");
		check = scanf("%d", &input);
		getchar();
		printf("\n");

		if (check == 0)
		{
			printf("Please make sure you enter a number\n");

		}
		else if (input == 1234)
		{
			printf("Thanks for playing\n");
			exit(0);
		}
		else if (input == com)
		{
			printf("You guessd it right in %d turn\n", turn);
			break;
		}
		else
		{
			printf("\nOops, you guessed it wrong\n");
			if (input > com)
			{
				printf("try a smaller number\n");
			}
			else
			{
				printf("try a greater number\n");
			}
		}
		printf("\n");
	}

	return 0;
}