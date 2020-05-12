/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_string.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: millefeuille </var/spool/mail/millefe      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:40:18 by millefeui         #+#    #+#             */
/*   Updated: 2020/05/10 16:43:00 by millefeui        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRING_H
# define LIBFT_STRING_H

# include <stdlib.h>

void	clear(char **pstr);

char	**ft_parse(char *str, char del);

char	*ft_append(char **str, char c);
char	**ft_list_append(char **str_lst, char c);

size_t	count_lines(const char *str, char del);

#endif
