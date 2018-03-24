#include <stdio.h>

/*
                                ######### PROBLEM #######
    If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
    The sum of these multiples is 23.Find the sum of all the multiples of 3 or 5 below 1000.

                                ####################

    AUTHOR: Gabriel Henrique
*/

int main()
{

    int sum = 0;
    int count = 0, limit;

    //LIMIT VALUE FOR ITERATION
    printf("Limit number for search: ");
    scanf("%i", &limit);

    //SEARCH LOOP
    while(count < limit)
    {
        if(count % 3 == 0 || count % 5 == 0)
            sum += count;

        count++;
    }

    printf("The sum of these multiples is %i", sum);

return 0;
}
