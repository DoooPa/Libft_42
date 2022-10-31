/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:47:03 by sakarkal          #+#    #+#             */
/*   Updated: 2022/10/30 11:49:19 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	f1(unsigned int x, char *c)
{
	(void)x;
	if(*c >= 0 && *c <= 127)
		*c += 1;
}

void	f(unsigned int x, char *c)
{
	(void)x;
	if(*c >= 0 && *c <= 127)
		*c += 1;
}

int main()
{
	char s[] = "0226";

	ft_striteri(s, &f);

	printf("%s\n", s);

	ft_striteri(s, &f1);
	
	printf("%s\n", s);
}