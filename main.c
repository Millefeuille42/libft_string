/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 19:19:00 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/12 19:21:09 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/string_object.h"
#include <stdio.h>

int main(void)
{
	t_string string = ft_string("ceci est un test");
	printf("content = %s\n", string.content);
	string.clear(&string);
	return (0);
}