/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 19:08:35 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/12 19:30:34 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/string_object.h"

static inline void init_string(t_string *this)
{
	this->clear = ft_clear_string;
	this->append_char = ft_append_char;
	this->prepend_char = ft_prepend_char;
	this->append_string = ft_append_string;
	this->prepend_string = ft_prepend_string;
}

t_string ft_string(char *str)
{
	t_string this;

	this.size = ft_strlen(str);
	this.content = ft_strdup(str);
	init_string(&this);
	return (this);
}