#include "libft.h"
#include <stdio.h>

int	main()
{
	char *dst;
	char *other;

	dst = ft_strnew(10);
	ft_strcpy(dst, "koira");
	other = ft_strdup("123.4567");
	ft_strcpy(&dst[4], ft_strchr(other, '.'));
	printf("%s\n", dst);
	return (0);
}
