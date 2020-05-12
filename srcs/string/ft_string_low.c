/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 20:50:20 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/12 20:50:59 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_object.h"

void ft_string_low(t_string *string)
{
	int i;

	i = -1;
	while (string->content[++i])
		string->content[i] = ft_tolower(string->content[i]);
}