#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bin_verify(char []);
void sum(char [], char [], char []);

int main()
{
    char bin1[33], bin2[33], result[33];
    int len1, len2, check;

    printf("Enter binary number 1: ");
    scanf("%s", bin1);
    printf("Enter binary number 2: ");
    scanf("%s", bin2);
    check = bin_verify(bin1);
    if (check)
    {
        printf("Invalid binary number %s.\n", bin1);
        exit(0);
    }
    check = bin_verify(bin2);
    if (check)
    {
        printf("Invalid binary number %s.\n", bin2);
        exit(0);
    }



    return 0;
}

int bin_verify(char str[])
{
    int i;

    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] - '0' != 1 ) && (str[i] - '0' != 0))
        {
            return 1;
        }
    }

    return 0;
}

int bin_check(char str[])
{
    int i;
    int count=0;


    for (i = 0; i < strlen(str); i++)
    {
        if ((str[i] - '0' == 1 ))
        {
            return 1;
        }
    }


