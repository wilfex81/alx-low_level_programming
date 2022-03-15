#include <stdio.h>
#include <unistd.h>
#include "holberton.h"


/**
*putchar to print the characters given
* main -Putchar
*char c -the characters given
* Return: Always 0 (Success)

*/
int putchar(char c)
{
        write(1, &c, 8);
        return(0);
}

int main(void)
{
        putchar("_putchar\n");
        return (0);
}
