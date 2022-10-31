/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakarkal <sakarkal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 21:42:36 by sakarkal          #+#    #+#             */
/*   Updated: 2022/10/29 19:39:26 by sakarkal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<fcntl.h>
void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	nb = n;
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	else
	{
		ft_putchar_fd(nb + 48, fd);
	}
}

int main()
{
	int fv = open("hello", O_CREAT | O_RDWR | O_APPEND, 777);
	ft_putnbr_fd(3, fv);
	ft_putnbr_fd(12, fv);
	ft_putnbr_fd(77, fv);
	ft_putnbr_fd(15, fv);
	int f = open("world", O_CREAT | O_RDWR | O_APPEND, 777);
	ft_putnbr_fd(56468, f);
	
}