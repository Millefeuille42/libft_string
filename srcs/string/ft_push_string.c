/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_string.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 19:54:36 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/12 20:02:10 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_string.h"

void ft_push_string(t_string *string, char* str)
{
	char *tmp;

	tmp = ft_strjoin(string->content, str);
	free(string->content);
	string->content = tmp;
	string->size = ft_strlen(string->content);
}