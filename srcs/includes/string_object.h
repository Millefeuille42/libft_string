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

typedef struct s_string
{
	size_t	size;
	char	*content;

	void	(*clear)(struct s_string *);
	void	(*append_char)(struct s_string *, char);
	void	(*prepend_char)(struct s_string *, char);
	void	(*append_string)(struct s_string *, const char *);
	void	(*prepend_string)(struct s_string *, const char *);

}				t_string;

/*
** All methods for string manipulation will be here
*/

void	ft_append_char(struct s_string *str, char c);
void	ft_prepend_char(struct s_string *str, char c);
void	ft_append_string(struct s_string *str, const char *new_str);
void	ft_prepend_string(struct s_string *str, const char *new_str);

/*
**
*/

t_string	ft_string(char *str); /* Function that initializes a string */

void		ft_clear_string(t_string *string);

#endif