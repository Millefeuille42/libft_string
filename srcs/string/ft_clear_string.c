/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 19:31:14 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/12 19:32:44 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_object.h"

void ft_clear_string(t_string *string)
{
	free(string->content);
	string->size = 0;
}