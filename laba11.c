#include <stdio.h>
#include <string.h>
#include <ctype.h>
int check(char number[])
{
    int len = strlen(number);
    if (isdigit(number[0]) || len > 1)
        if (number[0] == '-' || isdigit(number[0]))
        {
            for (int i = 1; i < len; i++)
            {
                if (!isdigit(number[i]))
                    return 0;
            }
            return 1;
        }
    return 0;
}

int main()
{
    printf("enter number->");
    char number[20];
    gets(number);
    if (check(number))
    {
        printf("%s is a number\n", number);
    }
    else
    {
        printf("%s is not a number\n", number);
    }
    return 0;
}
