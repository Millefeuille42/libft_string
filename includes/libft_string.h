/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_string.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dboyer <dboyer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:40:18 by millefeui         #+#    #+#             */
/*   Updated: 2020/05/12 19:27:22 by dboyer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_STRING_H
# define LIBFT_STRING_H

# include <stdlib.h>

void	clear(char **pstr);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);

char	**ft_parse(char *str, char del);

char	*ft_append(char **str, char c);
char	*ft_move_until(char *str, char *bool, int (*f)(int));
char	*ft_strdup(const char *s1);

char	**ft_list_append(char **str_lst, char c);

int		ft_str_isequal(char *str1, char *str2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);

size_t	count_lines(const char *str, char del);
size_t	ft_strlen(const char *str);

#endif
