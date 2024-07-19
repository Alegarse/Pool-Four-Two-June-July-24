/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgar2 <alejgar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 10:28:39 by alejgar2          #+#    #+#             */
/*   Updated: 2024/07/10 15:44:34 by alejgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		index;
	char	d;

	index = 0;
	while (index <= 9)
	{
		d = index + 48;
		write(1, &d, 1);
		index++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
