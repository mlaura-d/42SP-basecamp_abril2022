/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:21:37 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/16 19:03:03 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont] != '\0')
	{
		if ((str[cont] < 'a') || (str[cont] > 'z'))
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
