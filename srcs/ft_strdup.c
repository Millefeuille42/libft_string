/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 17:15:28 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/12 19:25:13 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"

char	*ft_strdup(const char *s1)
{
	char *copy;

	if (s1 != NULL)
	{
		if (!(copy = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char))))
			return (NULL);
		ft_memmove(copy, s1, ft_strlen(s1) + 1);
		return (copy);
	}
	return (NULL);
}
