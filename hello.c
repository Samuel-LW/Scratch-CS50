#include <stdio.h>
#include <cs50.h>

int main(void)
// This program recieves input from the user and then says hello to them
{
    string name = get_string("What is your name?\n");
    printf("hello, %s\n", name);
}

// %s is a placeholder that denotes a string goes here from the name variable (the inputed name)
