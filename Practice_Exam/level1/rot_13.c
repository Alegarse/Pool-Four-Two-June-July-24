/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgar2 <alejgar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 10:17:58 by alejgar2          #+#    #+#             */
/*   Updated: 2024/07/11 11:29:53 by alejgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	i = 0;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i])
		{
			if ((str[i] >= 'a' && str[i] <= 'm')
				|| (str[i] >= 'A' && str[i] <= 'M'))
				str[i] += 13;
			if ((str[i] >= 'n' && str[i] <= 'z')
				|| (str[i] >= 'N' && str[i] <= 'Z'))
				str[i] -= 13;
			write (1, &str[i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}
