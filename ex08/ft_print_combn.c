/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: byeom <byeom@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 21:53:14 by byeom             #+#    #+#             */
/*   Updated: 2021/04/07 07:23:48 by sangoh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	recursion(char *buf, int x, int len, int index)
{
	int		i;

	if (len == index)
	{
		write(1, buf, len);
		write(1, ", ", 2);
		return ;
	}
	i = x + 1;
	while (i <= 10 + index - len)
	{
		buf[index] = '0' + i;
		loop(buf, i, len, index + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int		i;
	int		len;
	char	last;
	char	buf[10];

	len = n;
	i = 0;
	while (i < 10 - n)
	{
		buf[0] = '0' + i;
		loop(buf, i, len, 1);
		i++;
	}
	last = buf[0] + 1;
	write(1, &last, 1);
	write(1, &buf[1], len - 1);
}
