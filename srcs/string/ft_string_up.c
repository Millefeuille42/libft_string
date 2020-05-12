/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_up.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 20:28:15 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/12 20:37:48 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_object.h"

void ft_string_up(t_string *string)
{
	int i;

	i = -1;
	while (string->content[++i])
		string->content[i] = ft_toupper(string->content[i]);
}