/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_string.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:40:18 by millefeui         #+#    #+#             */
/*   Updated: 2020/05/12 19:38:00 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRING_H
# define LIBFT_STRING_H

# include "string_object.h"
# include "dep.h"

char	**ft_parse(char *str, char del);

char	*ft_append_char(char **str, char c);
char	*ft_append_string(char **str, const char *new_str);
char	**ft_list_append_char(char **str_lst, char c);
char	**ft_list_append_string(char **str_lst, const char *new_str);

char	*ft_prepend_char(char **str, char c);
char	*ft_prepend_string(char **str, const char *new_str);
char	**ft_list_prepend_char(char **str_lst, char c);
char	**ft_list_prepend_string(char **str_lst, const char *new_str);

char	*ft_move_until(char *str, char *bool, int (*f)(int));
int		ft_str_isequal(char *str1, char *str2);
size_t	count_lines(const char *str, char del);
size_t	ft_strlen(const char *str);

#endif
