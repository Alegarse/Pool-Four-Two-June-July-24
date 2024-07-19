/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgar2 <alejgar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 07:00:01 by alejgar2          #+#    #+#             */
/*   Updated: 2024/07/11 07:11:11 by alejgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write (1, "a\n", 2);
				return (0);
			}
			i++;
		}
		write (1, "\n", 1);
		return (0);
	}
	else
	{
		write (1, "a\n", 2);
		return (0);
	}
}
