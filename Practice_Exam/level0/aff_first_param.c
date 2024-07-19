/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgar2 <alejgar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 07:11:40 by alejgar2          #+#    #+#             */
/*   Updated: 2024/07/11 07:21:00 by alejgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchr(char *src)
{
	while (*src)
	{
		write (1, src, 1);
		src++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		write (1, "\n", 1);
	else
		ft_putchr(argv[1]);
	return (0);
}
