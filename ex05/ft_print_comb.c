/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iung <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:14:47 by iung              #+#    #+#             */
/*   Updated: 2022/09/17 22:23:41 by iung             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(char c)
{
	write (1, &c, 1);
}

void	display(int a, int b, int c)
{
	if (a * 100 + b * 10 + c < 789)
	{
		ft_print_numbers(48 + a);
		ft_print_numbers(48 + b);
		ft_print_numbers(48 + c);
		ft_print_numbers(',');
		ft_print_numbers(' ');
	}
	else
	{
		ft_print_numbers(48 + a);
		ft_print_numbers(48 + b);
		ft_print_numbers(48 + c);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7 && a != b)
	{
		b = a + 1;
		while (b <= 8 && b != c)
		{
			c = b + 1;
			while (c <= 9)
			{
				display(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}
