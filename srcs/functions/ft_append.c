/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: millefeuille </var/spool/mail/millefe      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:40:18 by millefeui         #+#    #+#             */
/*   Updated: 2020/05/10 16:43:00 by millefeui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_string.h"

char	*ft_append_char(char **str, char c)
{
	int		i;
	char	*ret;

	if (!(*str) || !(*str)[0])
		return (0);
	i = (int)ft_strlen(*str) + 2;
	if (!(ret = malloc(sizeof(char) * i)))
		return (NULL);
	i = 0;
	while ((*str)[i])
	{
		ret[i] = (*str)[i];
		i++;
	}
	ret[i] = c;
	ret[i + 1] = 0;
	free(*str);
	return (ret);
}

char	**ft_list_append_char(char **str_lst, char c)
{
	int i;

	i = 0;
	while (str_lst[i])
	{
		if (!(str_lst[i] = ft_append_char(&str_lst[i], c)))
			return (NULL);
		i++;
	}
	return (str_lst);
}

char	*ft_append_string(char **str, const char *new_str)
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
	while ((*str)[i])
	{
		ret[i] = (*str)[i];
		i++;
	}
	i2 = 0;
	while (new_str[i2])
	{
		ret[i2 + i] = new_str[i2];
		i2++;
	}
	ret[i2 + i] = '\0';
	free(*str);
	return (ret);
}

char	**ft_list_append_string(char **str_lst, const char *new_str)
{
	int i;

	i = 0;
	while (str_lst[i])
	{
		if (!(str_lst[i] = ft_append_string(&str_lst[i], new_str)))
			return (NULL);
		i++;
	}
	return (str_lst);
}