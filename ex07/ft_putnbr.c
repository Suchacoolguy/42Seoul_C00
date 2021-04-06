/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangoh <sangoh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 14:01:53 by sangoh            #+#    #+#             */
/*   Updated: 2021/04/07 03:10:26 by sangoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, sizeof(c));
}

void	devide_till_zero(int nb)
{
	char nbr;

	if (nb == 0)
		return ;
	devide_till_zero(nb / 10);
	nbr = '0' + (nb % 10);
	ft_putchar(nbr);
}

void	ft_putnbr(int nb)
{
	if (nb > 0)
	{
		devide_till_zero(nb);
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		ft_putchar('-');
		devide_till_zero(-nb);
	}
}
