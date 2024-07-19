/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgar2 <alejgar2@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 07:58:05 by alejgar2          #+#    #+#             */
/*   Updated: 2024/07/11 08:27:05 by alejgar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_rev_print(char *str)
{
	int	len;

	len = ft_strlen(str);
	len--;
	while (len >= 0)
	{
		write(1, &str[len], 1);
		len--;
	}
	write (1, "\n", 1);
	return (str);
}

int	main(int argc, char **argv)
{
	(void)argc;
	ft_rev_print(argv[1]);
	return (0);
}
