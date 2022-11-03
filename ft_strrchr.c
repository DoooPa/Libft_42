/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:24:51 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/03 23:27:16 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) + 1;
	while (--i >= 0)
		if (s[i] == (unsigned char)c)
			return ((char *)s + i);
	return (0);
}
// int main()
// {
// 	char tb[] = "sdfghjkjhuyjh";
// 	int c = 's';

// 	printf("%s\n", ft_strrchr(tb, c));
// 	printf("%s\n", strrchr(tb, c));
// }