/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:41:05 by sakarkal          #+#    #+#             */
/*   Updated: 2022/11/04 02:19:10 by sakarkal         ###   ########.fr       */
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
