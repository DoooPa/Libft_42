/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 12:29:37 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/03 19:16:24 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)s;
	if (to_find[j] == 0)
		return (str);
	if (str == NULL && len == 0)
		return (NULL);
	while (str[i] != '\0' && i < len)
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0' && (i + j) < len)
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}

// int main()
// {
// 	char str[100] = "wawaachhada";
// 	char find[100] = "ha";
// 	printf("%s\n", ft_strnstr(str, find, 8));
// 	// printf("%s\n", strnstr(NULL, find, 8));
// }
