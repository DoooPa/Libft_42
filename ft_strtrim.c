/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:13:54 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/04 02:19:27 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	int		strt;
	int		end;
	char	*ptr;

	strt = 0;
	if (s == NULL)
		return (NULL);
	if (s[0] == '\0')
		return (ft_strdup(""));
	if (set == NULL)
		return (ft_strdup(s));
	while (ft_strchr(set, s[strt]) && s[strt])
		strt++;
	end = ft_strlen(s);
	while (ft_strchr(set, s[end]) && end != 0)
		end--;
	if (end < strt)
		return (ft_strdup(""));
	ptr = ft_substr(s, strt, end - strt + 1);
	return (ptr);
}
