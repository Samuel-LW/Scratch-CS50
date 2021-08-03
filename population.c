#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
   int n;
   do
   {
       n = get_int("Start Size: ");
       
   }
   while (n <= 8);

    // TODO: Prompt for end size
   int i;
   do
   {
       i = get_int("End Size: ");
       
   }
   while (i < n);

    // TODO: Calculate number of years until we reach threshold
    int y;
    for (y = 0; n < i; y++) 
   {
       n = n + (n/3) - (n/4);
   }

    // TODO: Print number of years
 
    printf("Years: %i\n", y);
}
