/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 00:49:04 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/16 18:55:55 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < '0') || (str[cont] > '9'))
		{
			return (0);
		}
		cont++;
	}
	if (cont == 0)
	{
		return (1);
	}
	return (1);
}
