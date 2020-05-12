/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prepend.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlabouri <mlabouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 22:03:49 by mlabouri          #+#    #+#             */
/*   Updated: 2020/05/12 22:04:40 by mlabouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_string.h"

void	ft_prepend_char(struct s_string *this, char c)
{
	int		i;
	char	*ret;

	if (!this->content || !this->content[0])
		return ;
	if (!(ret = malloc(sizeof(char) * (this->size + 2))))
		return ;
	i = 0;
	ret[i] = c;
	while (this->content[i])
	{
		ret[i + 1] = this->content[i];
		i++;
	}
	ret[i + 2] = 0;
	this->clear(this);
	this->size = ft_strlen(ret);
	this->content = ret;
}

void	ft_prepend_string(struct s_string *this, const char *new_str)
{
	int		i;
	int		i2;
	char	*ret;

	if (!this->content || !this->content[0] || !new_str || !new_str[0])
		return ;
	i2 = (int)ft_strlen(new_str);
	if (!(ret = malloc(sizeof(char) * (this->size + i2 + 1))))
		return ;
	i = 0;
	while (new_str[i])
	{
		ret[i] = new_str[i];
		i++;
	}
	i2 = 0;
	while (this->content[i2])
	{
		ret[i2 + i] = this->content[i2];
		i2++;
	}
	ret[i2 + i] = '\0';
	this->clear(this);
	this->size = ft_strlen(ret);
	this->content = ret;
}
