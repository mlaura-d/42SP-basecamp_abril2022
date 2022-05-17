/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 19:28:38 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/21 18:35:11 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	c;
	int	s;
	int	inte;

	c = 0;
	s = 1;
	inte = 0;
	while (str[c] == '\t' || str[c] == '\r' || str[c] == ' ')
	{
		c++;
	}
	while (str[c] == '-' || str[c] == '+')
	{
		if (str[c] == '-')
		{
			s *= -1;
		}
		c++;
	}
	while (str[c] >= '0' && str[c] <= '9')
	{
		inte = (str[c] - '0') + (inte * 10);
		c++;
	}
	return (inte * s);
}

/*#include <stdio.h>

int        ft_atoi(char *str);

int        main(void)
{
    printf("%d\n", ft_atoi("          ---+--+21333--+-ab567"));

}*/
