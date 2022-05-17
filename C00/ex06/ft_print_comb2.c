/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:25:10 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/11 23:31:55 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = -1;
	b = 0;
	while (a++ <= 99)
	{
		while (b++ <= 99)
		{	
			if (b <= 99)
			{
				ft_putchar(a / 10 + 48);
				ft_putchar(a % 10 + 48);
				ft_putchar(' ');
				ft_putchar(b / 10 + 48);
				ft_putchar(b % 10 + 48);
				if (a + b != 197)
				{
					write(1, ", ", 2);
				}
			}
		}
		b = a + 1;
	}
}
