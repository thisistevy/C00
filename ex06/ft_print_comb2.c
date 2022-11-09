/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:00:33 by iung              #+#    #+#             */
/*   Updated: 2022/09/17 22:19:55 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

void	display( int a, int b)
{
	put_char('0' + (a / 10));
	put_char('0' + (a % 10));
	put_char(' ');
	put_char('0' + (b / 10));
	put_char('0' + (b % 10));
	if (a < 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	first_num;
	int	second_num;

	first_num = 0;
	second_num = 1;
	while (first_num <= 98)
	{	
		while (second_num <= 99)
		{
			display(first_num, second_num);
			second_num++;
		}	
		first_num++;
		second_num = first_num + 1;
	}
}
