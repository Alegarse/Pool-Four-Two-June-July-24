/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgar2 <alejgar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:13:57 by alejgar2          #+#    #+#             */
/*   Updated: 2024/07/11 10:17:26 by alejgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str)
	{
		str++;
		c++;
	}
	return (c);
}

char	*ft_strrev(char *str)
{
	int	len;

	len = ft_strlen(str);
	len--;
	while (len >= 0)
	{
		write (1, &str[len], 1);
		len--;
	}
	return (str);
}

/*
int	main(void)
{
	ft_strrev("Hola caracola");
	return (0);
}
*/
