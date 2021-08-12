#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int space = 32;
int words = 1;
int phrase_length;
int sentences = 0;
int other_characters = 0;
int index;
int main (void)
{
    string phrase = get_string("Text: ");
    phrase_length = strlen(phrase);

    for (int w = 0; w < phrase_length; w++ )
    {
        if (phrase[w] == 32)
        {
        words++;
        }
    }

    for (int i = 0; i < phrase_length; i++ )
    {
        if (phrase[i] == 33 | phrase[i] == 46 | phrase[i] == 63)
        {
        sentences++;
        }
    }


    for (int k = 0; k < phrase_length; k++ )
    {
        if ((phrase[k] > 33 & phrase[k] < 46) || (phrase[k] > 46 & phrase[k] < 65) || (phrase[k] > 90 & phrase[k] < 97) || (phrase[k] > 122))
        {
        other_characters++;
        }
    }

    int characters = ((phrase_length + 1) - (words + sentences + other_characters));
    printf("Letters:  %i\n", characters);
    printf("Words:  %i\n", words);
    printf("Sentences:  %i\n", sentences);
    printf("Characters:  %i\n", other_characters);
    printf("string length:  %i\n", phrase_length);

    index = round(0.0588 * (((float) characters / (float) words) * 100) - 0.296 * (((float) sentences / (float) words) * 100) - 15.8);

    if (index < 16 & index > 1)
    {
    printf("Index: Grade %i\n", index);
    }

    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else
    {
        printf("Index: Grade 16+\n");
    }
}


