/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlaura-d <mlaura-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 16:47:30 by mlaura-d          #+#    #+#             */
/*   Updated: 2022/04/19 23:56:04 by mlaura-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (to_find[a] == '\0')
	{
		return (str);
	}
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] == to_find[b] && str[a + b] != '\0')
		{
			if (to_find[b] == '\0')
			{
				return (&str[a]);
			}
			b++;
		}
		a++;
	}
	return (0);
}

/*#include <stdio.h>
int main(void)
{
	char *str1 = "Hello World";
	char *to_find = "a";
	char *result;
	
	result = ft_strstr(str1, to_find);

	printf("%s\n", result);
	return 0;
}*/
