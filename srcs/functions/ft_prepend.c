//
// Created by millefeuille on 12/05/2020.
//

#include "../includes/libft_string.h"

void	ft_prepend_char(struct s_string *this, char c)
{
	int		i;
	char	*ret;

	if (!this->content || !this->content[0])
		return ;
	i = (int)ft_strlen(this->content) + 2;
	if (!(ret = malloc(sizeof(char) * i)))
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
	this->content = ret;
}

void	ft_prepend_string(struct s_string *this, const char *new_str)
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
	this->content = ret;
}