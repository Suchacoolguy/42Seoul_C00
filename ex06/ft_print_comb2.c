/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangoh <sangoh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 04:58:44 by sangoh            #+#    #+#             */
/*   Updated: 2021/04/01 04:58:47 by sangoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_digits(int digits)
{
	ft_putchar('0' + digits / 10);
	ft_putchar('0' + digits % 10);
}

void	ft_print_comb2(void)
{
	int first_two;
	int second_two;

	first_two = 0;
	while (first_two <= 97)
	{
		second_two = first_two + 1;
		while (second_two <= 99)
		{
			ft_put_digits(first_two);
			ft_putchar(' ');
			ft_put_digits(second_two);
			ft_putchar(',');
			second_two++;
		}
		first_two++;
	}
	ft_put_digits(98);
	ft_putchar(' ');
	ft_put_digits(99);
}
