/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 16:20:54 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/22 12:53:58 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	save;

	save = 1;
	if (nb < 0)
	{
		return (0);
	}
	else if (nb <= 1)
	{
		return (1);
	}
	while (nb > 0)
	{
		save *= (nb--);
	}
	return (save);
}
