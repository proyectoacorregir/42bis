#include "libft.h"
#include <stdio.h>

int	main()
{
	char str[] = "hello";
	char str2[] = " world";

	ft_strlcat(str, str2, 8);
	printf("%s", str);
}