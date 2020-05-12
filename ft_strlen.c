//
// Created by millefeuille on 12/05/2020.
//

#include "libft_string.h"

size_t ft_strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}