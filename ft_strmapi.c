/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:41:05 by sakarkal          #+#    #+#             */
/*   Updated: 2022/10/30 10:44:25 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*api;

	i = 0;
	if (!str || !f)
		return (0);
	api = malloc(ft_strlen(str) + 1);
	if (!api)
		return (NULL);
	while (str[i])
	{
		api[i] = f(i, str[i]);
		i++;
	}
	api[i] = '\0';
	return (api);
}

// char y(unsigned int i , char c)
// {
// 	return (c + i);
// }


// int main(void)
// {
// 	char x[] = "abcdefgH";

// 	char *s = ft_strmapi(x, y);

// 	printf("| %s |\n", s);
	
// }