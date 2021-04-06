/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangoh <sangoh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/01 01:35:22 by sangoh            #+#    #+#             */
/*   Updated: 2021/04/07 03:00:52 by sangoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printer(char first, char second, char third);

void	ft_print_comb(void)
{
	char first_num;
	char second_num;
	char third_num;

	first_num = '0';
	while (first_num <= '6')
	{
		second_num = first_num + 1;
		while (second_num <= '8')
		{
			third_num = second_num + 1;
			while (third_num <= '9')
			{
				printer(first_num, second_num, third_num);
				third_num++;
			}
			second_num++;
		}
		first_num++;
	}
	write(1, "789", 3);
}

void	printer(char first, char second, char third)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	write(1, ", ", 2);
}
