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

//
// Created by millefeuille on 10/05/2020.
//

#include "libft_string.h"

char	*ft_append(char **str, char c)
{
	int		i;
	char	*ret;

	i = 0;
	if (!(*str) || !(*str)[0])
		return (0);
	while ((*str)[i])
		i++;
	i += 2;
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

char	**ft_list_append(char **strs, char c)
{
	int i;

	i = 0;
	while (strs[i])
	{
		if (!(strs[i] = ft_append(&strs[i], c)))
			return (NULL);
		i++;
	}
	return (strs);
}
