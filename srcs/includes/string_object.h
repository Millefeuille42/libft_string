/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_object.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 18:53:46 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/12 19:33:42 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_OBJECT_H
#define STRING_OBJECT_H

#include "./libft_string.h"

/*
** All methods for string manipulation will be here
*/

typedef struct s_string
{
	size_t	size;
	char	*content;

	void	(*clear)(struct s_string *);

}				t_string;

t_string	ft_string(char *str); /* Function that initializes a string */

void		ft_clear_string(t_string *string);

#endif