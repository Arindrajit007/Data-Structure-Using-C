#include <stdio.h>

char reverse(char *str, int k)
{
	static int i = 0;
	char temp;
	if (*(str + k) == NULL)
	{
		return;
	}
    reverse(str, k+1);
    if (i < k)
	{
		temp=str[i];
		str[i]=str[k];
		str[k]=temp;
		i++;
	}
}

void main()
{
	char str[50];
	gets(str);
    reverse(str, 0);
	printf("Reverse of the given string is %s", str);
    return 0;
}
