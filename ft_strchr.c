/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 10:19:22 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/03 23:26:50 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	if (s[i] == (unsigned char)c)
		return ((char *)s + i);
	return (0);
}

// int main()
// {
// 	char tb[5] = "";
// 	int c = 0;

// 	printf("%s\n", ft_strchr(tb, c));
// 	printf("%s\n", strchr(tb, c));
// }