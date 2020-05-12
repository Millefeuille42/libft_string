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

size_t ft_strlen(const char *str);
void	clear(char **pstr);

char	**ft_parse(char *str, char del);

char	*ft_append_char(char **str, char c);
char	**ft_list_append_char(char **str_lst, char c);
char	*ft_append_string(char **str, const char *new_str);
char	**ft_list_append_string(char **str_lst, const char *new_str);

char	*ft_prepend_char(char **str, char c);
char	**ft_list_prepend_char(char **str_lst, char c);
char	*ft_prepend_string(char **str, const char *new_str);
char	**ft_list_prepend_string(char **str_lst, const char *new_str);
size_t	count_lines(const char *str, char del);

#endif
