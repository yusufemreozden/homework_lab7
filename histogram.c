/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   Scores Histogram                                                         */
/*                                                                            */
/*   By: Yusuf Emre OZDEN | <yusufemreozdenn@gmail.com>                       */
/*                                                                            */      
/*   https://GitHub.com/yusufemreozden                                        */
/*   https://linkedIn.com/in/yusufemreozden                                   */
/*   https://sites.google.com/view/yusufemreozden                             */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void print_histogram(int scores[], int min_score, int max_score) 
{
    printf("Histogram of the grades:\n");

    int i = min_score;
    while (i<=max_score)
    {
        if (scores[i]>0) 
        {
            printf("%2d: ", i);

            int j = 0;
            while (j<scores[i]) 
            {
                printf("*");
                j++;
            }
            printf("\n");
        }
        i++;
    }
}

int main() 
{
    const int MAX_SCORE = 100;
    const int MIN_SCORE = 0;

    int all_scores[MAX_SCORE+1] = {0};
    int score;

    printf("Enter a grade (-1 to quit): ");

    while (1) 
    {
        scanf("%d", &score);

        if (score == -1) 
        {
            break;
        }
        if (score<MIN_SCORE || score>MAX_SCORE) 
        {
            printf("Invalid score. Enter a grade between %d and %d.\n", MIN_SCORE, MAX_SCORE);
            continue;
        }
        all_scores[score]++;  
        printf("Enter a grade (-1 to quit): ");
    }
    print_histogram(all_scores, MIN_SCORE, MAX_SCORE);
}

// made by Yusuf Emre OZDEN