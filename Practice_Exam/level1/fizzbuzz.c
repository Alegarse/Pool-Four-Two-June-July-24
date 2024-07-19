/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgar2 <alejgar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:52:08 by alejgar2          #+#    #+#             */
/*   Updated: 2024/07/11 07:55:51 by alejgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

void	ft_prtnum(int num)
{
	char	c;

	if (num <= 9)
	{
		c = num + '0';
		ft_putchr(&c);
	}
	else
	{
		c = (num / 10) + '0';
		ft_putchr(&c);
		c = (num % 10) + '0';
		ft_putchr(&c);
	}
}

int	main(void)
{
	int		counter;

	counter = 1;
	while (counter <= 100)
	{
		if (counter % 3 == 0 && counter % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (counter % 3 == 0)
			write (1, "fizz", 4);
		else if (counter % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_prtnum(counter);
		write (1, "\n", 1);
		counter++;
	}
	return (0);
}
