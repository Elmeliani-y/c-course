#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
        const int min = 1;
        const int max = 100;
        int guesses;
        int result;
        int number_guess = 0;
        int repeats = 0;
        srand(time(0));

        result = (rand() % max) + min;
        for (int i = 0; i < 5; i++)
        {
                printf("Enter guess number %d : \t", i + 1);
                scanf("%d", &guesses);
                if (guesses < 0)
                {
                        printf("Invalid input. Please enter a positive integer.\n");
                        i--;
                        repeats += 1;
                        continue;
                }
                else if (repeats == 3){
                        printf("Come back when you're feeling sober >:(");
                        return 0;
                }

                if (guesses == result)
                {
                        printf("Congratulations, you won!!!!!!\n");
                        number_guess = 0;
                        break;
                }
                if (number_guess == 4 && guesses != result)
                {
                        printf("You lost because you went off the limit. The right answer is %d\n", result);
                        break;
                }
                else
                {
                        number_guess += 1;
                }
        }
}