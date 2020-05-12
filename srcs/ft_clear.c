/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:40:18 by millefeui         #+#    #+#             */
/*   Updated: 2020/05/12 19:03:45 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by millefeuille on 10/05/2020.
//

#include "libft_string.h"

void				clear(char **pstr)
{
	int i;

	i = 0;
	if (pstr)
	{
		while (pstr[i])
		{
			free(pstr[i]);
			pstr[i] = NULL;
			i++;
		}
		free(pstr);
		pstr = NULL;
	}
}
