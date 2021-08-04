#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{ float owed;
do
   {
       owed = get_float("Cash Owed: ");

   }
   while (owed < 0);

   int owed2 = round(owed * 100);

int coins = 0;
while (owed2 > 0)
   {
     if (owed2 >= 25)
       {
           owed2 = owed2 - 25, coins++;
       }

     else if (owed2 >= 10)
       {
           owed2 = owed2 - 10, coins++;
       }

     else if (owed2 >= 5)
       {
           owed2 = owed2 - 5, coins++;
       }
     else if (owed2 >= 1)
       {
           owed2 = owed2 - 1, coins++;
       }
   }
printf("Coins returned: %i\n", coins);
}
