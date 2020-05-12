//
// Created by millefeuille on 12/05/2020.
//

#include "../includes/libft_string.h"

char	*ft_prepend_char(char **str, char c)
{
	int		i;
	char	*ret;

	if (!(*str) || !(*str)[0])
		return (0);
	i = (int)ft_strlen(*str) + 2;
	if (!(ret = malloc(sizeof(char) * i)))
		return (NULL);
	i = 0;
	ret[i] = c;
	while ((*str)[i])
	{
		ret[i + 1] = (*str)[i];
		i++;
	}
	ret[i + 2] = 0;
	free(*str);
	return (ret);
}

char	**ft_list_prepend_char(char **strs, char c)
{
	int i;

	i = 0;
	while (strs[i])
	{
		if (!(strs[i] = ft_prepend_char(&strs[i], c)))
			return (NULL);
		i++;
	}
	return (strs);
}

char	*ft_prepend_string(char **str, const char *new_str)
{
	int		i;
	int		i2;
	char	*ret;

	if (!(*str) || !(*str)[0] || !new_str || !new_str[0])
		return (0);
	i = (int)ft_strlen(*str);
	i2 = (int)ft_strlen(new_str);
	if (!(ret = malloc(sizeof(char) * (i + i2 + 1))))
		return (NULL);
	i = 0;
	while (new_str[i])
	{
		ret[i] = new_str[i];
		i++;
	}
	i2 = 0;
	while ((*str)[i2])
	{
		ret[i2 + i] = (*str)[i2];
		i2++;
	}
	ret[i2 + i] = '\0';
	free(*str);
	return (ret);
}

char	**ft_list_prepend_string(char **str_lst, const char *new_str)
{
	int i;

	i = 0;
	while (str_lst[i])
	{
		if (!(str_lst[i] = ft_prepend_string(&str_lst[i], new_str)))
			return (NULL);
		i++;
	}
	return (str_lst);
}