/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:32:36 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/17 02:48:03 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < 'A') || (str[cont] > 'Z'))
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
