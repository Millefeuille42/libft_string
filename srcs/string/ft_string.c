/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 19:08:35 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/12 20:31:13 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "string_object.h"


static inline void init_string(t_string *this)
{
	this->clear = ft_clear_string;
	this->push = ft_push_string;
	this->up = ft_string_up;
}


t_string ft_string(char *str)
{
	t_string this;

	this.size = ft_strlen(str);
	this.content = ft_strdup(str);
	init_string(&this);
	return (this);
}