/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sangoh <sangoh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/31 18:50:00 by sangoh            #+#    #+#             */
/*   Updated: 2021/04/06 22:10:42 by sangoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		zero_to_nine;
	char	digit;

	digit = '0';
	zero_to_nine = 0;
	while (zero_to_nine < 10)
	{
		write(1, &digit, 1);
		digit++;
		zero_to_nine++;
	}
}
