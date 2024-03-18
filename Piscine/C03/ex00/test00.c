#include <stdio.h>

int	my_strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int	main()
{
	char str1[] = "Antoni";
	char str2[] = "Antonin";

	printf("Comparaison de \"%s\" et \"%s\": %d\n", str1, str2, my_strcmp(str1, str2));

	return 0;
}
