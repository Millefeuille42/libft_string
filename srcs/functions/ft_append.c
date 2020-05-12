/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: millefeuille </var/spool/mail/millefe      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:40:18 by millefeui         #+#    #+#             */
/*   Updated: 2020/05/10 16:43:00 by millefeui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft_string.h"

void	ft_append_char(struct s_string *this, char c)
{
	int		i;
	char	*ret;

	if (this->content || !this->content[0])
		return ;
	i = (int)ft_strlen(this->content) + 2;
	if (!(ret = malloc(sizeof(char) * i)))
		return ;
	i = 0;
	while (this->content[i])
	{
		ret[i] = this->content[i];
		i++;
	}
	ret[i] = c;
	ret[i + 1] = 0;
	this->clear(this);
	this->content = ret;
}

void	ft_append_string(struct s_string *this, const char *new_str)
{
	int		i;
	int		i2;
	char	*ret;

	if (!this->content || !this->content[0] || !new_str || !new_str[0])
		return ;
	i = (int)ft_strlen(this->content);
	i2 = (int)ft_strlen(new_str);
	if (!(ret = malloc(sizeof(char) * (i + i2 + 1))))
		return ;
	i = 0;
	while (this->content[i])
	{
		ret[i] = this->content[i];
		i++;
	}
	i2 = 0;
	while (new_str[i2])
	{
		ret[i2 + i] = new_str[i2];
		i2++;
	}
	ret[i2 + i] = '\0';
	this->clear(this);
	this->content = ret;
}