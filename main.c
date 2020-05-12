/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 19:19:00 by dboyer            #+#    #+#             */
/*   Updated: 2020/05/12 22:03:48 by mlabouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/string_object.h"
#include <stdio.h>

int main(void)
{
	t_string string = ft_string("ceci est un test");
	printf("size = %zu -- content = %s\n",string.size, string.content);
	string.push(&string, " ok!");
	string.upper(&string);
	printf("size = %zu -- content = %s\n",string.size, string.content);
	string.lower(&string);
	printf("size = %zu -- content = %s\n",string.size, string.content);
	string.clear(&string);
	return (0);
}
