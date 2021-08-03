#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // TODO: Prompt for start size
   int height;
   do
   {
       height = get_int("height of pyramid: ");

   }
   while (height > 8 || height < 1);

   int i;
   int j;
   int d;
   for (i = 0; i < height; i++)
   {
       for (d = height - 1; d > i; d--)
       {
           printf(" ");
       }
       for (j = 0; j <= i; j++)
       {
           printf("#");
       }
       printf("\n");
   }
}
