#include <stdio.h>

int length(char [], int);

int main()
{
    char str[20];
    int count;

    printf("Enter any string :: ");
    scanf("%s", str);
    count = length(str, 0);
    printf("\nThe number of characters in [ %s ] are %d.\n", str, count);
    return 0;
}

int length(char str[], int index)
{
    if (str[index] == '\0')
    {
        return 0;
    }
    return (1 + length(str, index + 1));
}
